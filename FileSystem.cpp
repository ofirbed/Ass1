//
// Created by chaimbgu on 09/11/17.
//

#include "FileSystem.h"
#include <algorithm>
#include <array>
#include <iostream>
#include <functional>
#include <iostream>
#include <string>
#include <sstream>
#include <iterator>
using namespace std;
Directory& FileSystem::getRootDirectory() const {

    return  *rootDirectory;
}
FileSystem::FileSystem():rootDirectory(new Directory("/",NULL)) {
    workingDirectory = rootDirectory;// probably not good line
     }



Directory& FileSystem::getWorkingDirectory() const {
    return *workingDirectory;
}


void FileSystem::setWorkingDirectory(Directory *newWorkingDirectory) {
    workingDirectory=newWorkingDirectory;

}



//get path and return the file(last name at the path)
BaseFile* FileSystem::getFileByPath(string path) {

    std::size_t found = path.find_last_of("/\\");
    string parentPath = path.substr(0,found);
    string nameOfFileOrDir =  path.substr(found+1);

    Directory *currDirectory = &getWorkingDirectory();

    if(cdCommand(path)==2){
        cdCommand(parentPath);
        BaseFile* output = getWorkingDirectory().getDirChildByName(nameOfFileOrDir);
        if(output!=NULL) {
            cdCommand(currDirectory->getAbsolutePath());
            return output;
        }

    }
    if(cdCommand(path)==1){
        Directory *output = &getWorkingDirectory();
        cdCommand(currDirectory->getAbsolutePath());
        return output;

    }

    cdCommand(currDirectory->getAbsolutePath());
    return nullptr ;

}




int FileSystem::cdCommand(string path) {//return 0 if no path like this 1 if the last base file is directory and 2 if the last basefile is file
    Directory* currDirectory = workingDirectory;
    if(path.compare("..")==0){
        currDirectory= currDirectory->getParent();
        if (currDirectory!=NULL) {
            workingDirectory = currDirectory;
            return 1;
        }
        else

            return 0;

    }
    bool flag =true;
    if (path.substr(0, 2).compare("..") == 0)
        flag = false;
    while(!flag) {
        currDirectory = currDirectory->getParent();
        if(currDirectory==NULL)
            return 0;
        path = path.substr(3);
        if(path.size()==0) {// we know that curr is not null already becase if it was he was exit from the function
            workingDirectory = currDirectory;
            return 1;
        }
        if (path.substr(0, 2).compare("..") != 0)
            flag = true;
    }



    if (path.at(0)=='/'){// if start from root
        path = path.substr(1);
        std::replace(path.begin(), path.end(), '/', ' ');  // replace ':' by ' '

        vector<string> array;
        stringstream ss(path);
        string temp;
        while (ss >> temp)
            array.push_back(temp);
        currDirectory = rootDirectory;
        for(signed int i =0;i<array.size();i++){
            BaseFile*  child= currDirectory->getDirChildByName(array.at(i));
            if(child!=NULL&&child->getType().compare("DIR")==0)
                currDirectory=(Directory*)child;
                //currDirectory = currDirectory->getDirChildByName(array.at(i));
            else if (child == NULL||(i<array.size()-1)&child->getType().compare("FILE")==0)
                return 0;

            else
                return 2;

        }
        workingDirectory = currDirectory;
        return 1;


    }
    std::replace(path.begin(), path.end(), '/', ' ');  // replace ':' by ' '

    vector<string> array;
    stringstream ss(path);
    string temp;
    while (ss >> temp)
        array.push_back(temp);
    //  currDirectory = workingDirectory;
    for (signed int i = 0; i < array.size(); i++) {
        BaseFile*  child= currDirectory->getDirChildByName(array.at(i));
        if(child!=NULL&&child->getType().compare("DIR")==0)
            //currDirectory = currDirectory->getDirChildByName(array.at(i));
            currDirectory=(Directory*)child;
        else if (child == NULL||(i<array.size()-1)&child->getType().compare("FILE")==0)
            return 0;

        else
            return 2;


    }
    workingDirectory=currDirectory;
    return 1;
}