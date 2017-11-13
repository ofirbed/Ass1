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
                if(child->getType().compare("DIR")==0)
                    currDirectory=(Directory*)child;
                //currDirectory = currDirectory->getDirChildByName(array.at(i));
                else if (currDirectory == NULL|i<array.size()-1)
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
    currDirectory = workingDirectory;
    for (signed int i = 0; i < array.size(); i++) {
        BaseFile*  child= currDirectory->getDirChildByName(array.at(i));
        if(child->getType().compare("DIR")==0)
        //currDirectory = currDirectory->getDirChildByName(array.at(i));
            currDirectory=(Directory*)child;
        else if (currDirectory == NULL|i<array.size()-1)
            return 0;

        else
            return 2;


    }
    workingDirectory=currDirectory;
    return 1;


}

