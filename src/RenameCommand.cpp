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
        std::cout << "No such file or directory"<< std::endl;
        return;
    }
    if(flag ==1) {
        fs.cdCommand(workingDirectoryPath);
    }
    int found = sourcePath.find_last_of('/');
    if(found==0)    //it mean that the path is direct from root : EX "/newDir"
        found=found+1;

    string parentPath = sourcePath.substr(0,found);
    if(found==-1)
        parentPath= fs.getWorkingDirectory().getAbsolutePath();
    if(parentPath.at(0)!='/')//************
        parentPath =fs.getWorkingDirectory().getAbsolutePathWithouRoot()+"/"+parentPath;
    if(fs.cdCommand(parentPath)==1){//go to parent dir and chec if ther is child with the new name already
        if(fs.getWorkingDirectory().getDirChildByName(newName)!=NULL) {
            fs.cdCommand(workingDirectoryPath);//return to curr workinfg directory before exist the function
            return;//because there is already file with that name
        }
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


