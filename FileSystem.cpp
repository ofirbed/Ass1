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

    Directory currDirectory = getWorkingDirectory();

    if(cdCommand(parentPath)==2){
        BaseFile* output = getWorkingDirectory().getDirChildByName(nameOfFileOrDir);
        if(output!=NULL) {
            cdCommand(currDirectory.getAbsolutePath());
            return output;
        }

    }
    if(cdCommand(parentPath)==1){
        BaseFile output = getWorkingDirectory();
        cdCommand(currDirectory.getAbsolutePath());
        return &output;

    }
    cdCommand(currDirectory.getAbsolutePath());
    return nullptr ;

}


bool FileSystem::cdCommand(string path) {
    Directory* currDirectory = workingDirectory;
        if(path.compare("..")==0){
            currDirectory= currDirectory->getParent();
            if (currDirectory!=NULL) {
                workingDirectory = currDirectory;
                return true;
            }
            else
                return false;

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
                currDirectory = currDirectory->getDirChildByName(array.at(i));
                if(currDirectory== NULL)
                    return false;

            }
            workingDirectory = currDirectory;
            return true;


        }

    std::replace(path.begin(), path.end(), '/', ' ');  // replace ':' by ' '

    vector<string> array;
    stringstream ss(path);
    string temp;
    while (ss >> temp)
        array.push_back(temp);

    /*istringstream iss(path);

    vector<string> array{istream_iterator<string>{iss},
                         istream_iterator<string>{}};*/
    currDirectory = workingDirectory;
    for (signed int i = 0; i < array.size(); i++) {
        currDirectory = currDirectory->getDirChildByName(array.at(i));
        if (currDirectory == NULL)

            return false;
    }
    workingDirectory=currDirectory;
    return true;


}

