//
// Created by chaimbgu on 12/11/17.
//
#include "Commands.h"
using namespace std;
#include <iostream>

#include <algorithm>
#include <array>

#include <functional>
#include <sstream>
MkfileCommand::MkfileCommand(string args): BaseCommand(args){//constructor
}

void MkfileCommand::execute(FileSystem &fs) {
    string pathAndSize = getArgs();
    int index =pathAndSize.find_first_of(' ');
    string strSize = pathAndSize.substr(index+1);//only size
    string path = pathAndSize.substr(0,index);//only path
    int fileSize = atoi(strSize.c_str());//convert to int
    Directory* workingDirectory = &fs.getWorkingDirectory();
    if(fs.cdCommand(path)==1){
        "file already exist";
        fs.setWorkingDirectory(workingDirectory);
        return;
    }
    index = path.find_last_of('/');
    string fileName= path.substr(index+1);
    path=path.substr(0,index);
    if(fs.cdCommand(path)==0) {
        "the system cannot fint the path specified";
        fs.setWorkingDirectory(workingDirectory);
        return;
    }
    fs.getWorkingDirectory().pushToChildren(new File(fileName,fileSize));
    fs.setWorkingDirectory(workingDirectory);




}
string MkfileCommand::toString() {}


