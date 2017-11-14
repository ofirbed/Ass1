//
// Created by chaimbgu on 14/11/17.
//

#include "Commands.h"
using  namespace std;

#include <iostream>

CpCommand::CpCommand(string args) :BaseCommand(args){}//constructor

void CpCommand::execute(FileSystem &fs) {
    int index = getArgs().find_last_of(' ');
    string sourcePath = getArgs().substr(0, index);
    string destPath = getArgs().substr(index + 1);


    Directory *currWorkingDirectory = &fs.getWorkingDirectory();

    int flag = fs.cdCommand(sourcePath);
    if (flag != 0)
        fs.setWorkingDirectory(currWorkingDirectory);

    if (flag == 0){//the path not exist{
        std::cout << "no such file or directory";
    return;
}
    if(flag==1){

    }



}