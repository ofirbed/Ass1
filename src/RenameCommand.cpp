//
// Created by chaimbgu on 16/11/17.
//

#include "../include/Commands.h"
#include <iostream>
RenameCommand::RenameCommand(string args) :BaseCommand(args){}

void RenameCommand::execute(FileSystem &fs) {
    string path = getArgs();
    int index = getArgs().find_last_of(' ');
    string newName = path.substr(index+1);
    string sourcePath = path.substr(0,index);
    string workingDirectoryPath = fs.getWorkingDirectory().getAbsolutePath();
    int flag = fs.cdCommand(sourcePath);
    if(flag ==0) {
        std::cout << "no such file or directory \n";
        return;
    }
    if(flag ==1) {
        fs.cdCommand(workingDirectoryPath);
    }
    BaseFile* fileToRename = fs.getFileByPath(sourcePath);
    if(fileToRename->getType().compare("DIR")==0){
        Directory* dirptr = (Directory*)fileToRename;
        if(workingDirectoryPath.compare(dirptr->getAbsolutePath())==0) {//check if we want to change toe working directory
            std::cout << "Can't rename the working directory"<< std::endl;
            return;
        }
    }
    fileToRename->setName(newName);
    return;
}

string RenameCommand::toString() {
    return "rename";
}


