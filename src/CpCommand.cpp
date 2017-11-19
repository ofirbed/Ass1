#include "../include/Commands.h"
using  namespace std;

#include <iostream>

CpCommand::CpCommand(string args) :BaseCommand(args){}//constructor

void CpCommand::execute(FileSystem &fs) {
    int index = getArgs().find_last_of(' ');
    string sourcePath = getArgs().substr(0, index);
    string destPath = getArgs().substr(index + 1);


    Directory *currWorkingDirectory = &fs.getWorkingDirectory();

    int flag = fs.cdCommand(sourcePath);
    //if (flag != 0)
    //   fs.setWorkingDirectory(currWorkingDirectory);

    if (flag == 0){//the path not exist{
        std::cout << "No such file or directory"<< std::endl;;
        return;
    }
    if(flag==1)//return to curr working directory
        fs.cdCommand(currWorkingDirectory->getAbsolutePath());

    flag = fs.cdCommand(destPath);

    if(flag==1){//dest file exist
        Directory * parent = &fs.getWorkingDirectory();//because now the working directory is on dest path
        fs.cdCommand(currWorkingDirectory->getAbsolutePath());//return to exist working directory
        BaseFile* copyBaseFile=fs.getFileByPath(sourcePath)->clone();
        if(copyBaseFile->getType().compare("DIR")==0) {
            Directory *tocopy = (Directory *) copyBaseFile;
            tocopy->setParent(parent);
            tocopy = nullptr;
        }

        fs.cdCommand(destPath);
        fs.getWorkingDirectory().pushToChildren(copyBaseFile);
        fs.cdCommand(currWorkingDirectory->getAbsolutePath());
        return;
    }
    std::cout << "No such file or directory"<< std::endl;


}

string CpCommand::toString() {
    return "cp";
}