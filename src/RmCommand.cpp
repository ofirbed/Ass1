//
// Created by ofirbed on 14/11/17.
//

#include <iostream>
#include "../include/Commands.h"

RmCommand::RmCommand(string args) : BaseCommand(args){};

void RmCommand::execute(FileSystem &fs) {

    string path(getArgs());
    Directory *currDirectory = &fs.getWorkingDirectory();


    if((path.at(0)!='/' ))            //if the path is just file name, convert it to real path
        path=currDirectory->getAbsolutePathWithouRoot()+"/"+path;

    BaseFile *file = fs.getFileByPath(path);

    bool sourceIsAParent = false;
    while (fs.getWorkingDirectory().getAbsolutePath().compare("/")!=0 & !sourceIsAParent) {

        if (file==&fs.getWorkingDirectory())
            sourceIsAParent = true;

        fs.cdCommand(fs.getWorkingDirectory().getParent()->getAbsolutePath());
    }

    if((path.compare("/")==0 )| (sourceIsAParent))      //if it root or working directory
        std::cout << "Can't remove directory" << std::endl;
    else {


        int argType = fs.cdCommand(path);

        if (argType == 0) {                                                 //there is no file or dir
            std::cout << "No such file or directory" << std::endl;
        } else {
           // if(argType== 2 | path.at(0)!='/')
            //    path=currDirectory->getAbsolutePathWithouRoot()+"/"+path;


            size_t found = path.find_last_of("/\\");
            if(found==0)    //it mean that the path is direct from root : EX "/newDir"
                found=found+1;
            DeleteBaseFile(file,path.substr(0,found),fs);



        }
    }

    fs.cdCommand(currDirectory->getAbsolutePath());
};


void RmCommand::DeleteBaseFile(BaseFile *baseFile,string pathOfParentDir,FileSystem &fs) {

    if (baseFile->getType().compare("FILE") == 0) {     //the arg base file is a file and not dir
        Directory *parent = (Directory *) fs.getFileByPath(pathOfParentDir);
        //fs.cdCommand(pathOfParentDir);
//        fs.getWorkingDirectory().removeFile(baseFile);
        (*parent).removeFile(baseFile->getName());


    } else {                                          //base file is a dir

        Directory *dir = (Directory *) baseFile;
        dir->getParent()->removeDir(dir->getName());
        //delete(dir);
        /*for(int i =0;i<(*dir).getChildren().size();i++){
            BaseFile *child = (*dir).getChildren().at(i);
            DeleteBaseFile(child,dir->getAbsolutePath(),fs);
        }
     //   dir->getParent()->removeFile(dir);

    }*/


    }
}

string RmCommand::toString() {
    return "rm";
}
BaseCommand* RmCommand::clone(vector<BaseCommand *> &history) {
    BaseCommand* copy = new RmCommand(getArgs());
    return copy;
}