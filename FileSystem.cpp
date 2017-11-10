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
                currDirectory = currDirectory->getChildByName(array.at(i));
                if(currDirectory== NULL)
                    return false;

            }
            workingDirectory = currDirectory;
            return true;


        }



}
