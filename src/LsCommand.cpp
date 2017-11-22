//
// Created by ofirbed on 10/11/17.
//

#include <iostream>
#include "../include/Commands.h"


LsCommand:: LsCommand(string args) : BaseCommand(args){};

void LsCommand ::execute(FileSystem &fs) {

    string args(getArgs());
    Directory *currDirectory = &fs.getWorkingDirectory();
    Directory *directoryToExplore= getDirectory(args, fs);

    if(directoryToExplore != nullptr) {

        //check if sort by size or by name
        if (args.substr(0, 2).compare("-s") == 0) {
            (*directoryToExplore).sortBySize();
            args = args.substr(2);
        } else
            (*directoryToExplore).sortByName();


        vector<BaseFile *> files = (*directoryToExplore).getChildren();      //get all children files
        for (unsigned int i = 0; i < files.size(); i++) {
            string fileDetails = getFileDetails(*files.at(i));
            std::cout << fileDetails << std::endl;
        }
    }
    else
        std::cout << "The system cannot find the path specified" << std::endl;

    fs.cdCommand(currDirectory->getAbsolutePath());


}

Directory* LsCommand::getDirectory(string args, FileSystem &fs) {

    if(args.substr(0,2).compare("-s")==0)              //cut the "-s" if there is from the path
        args= args.substr(2);

    if(((args.compare("")==0) |( args.compare(" ")==0)))      //if there is no path input
        return &fs.getWorkingDirectory();

    if(fs.cdCommand(args))
        return &fs.getWorkingDirectory();
    else
        return nullptr;

    }



string LsCommand::toString() {

    return "ls";
}


//get file detail: TYPE   NAME    SIZE
string LsCommand::getFileDetails(BaseFile &file) {

     string type(file.getType());
     string name(file.getName());
     int size(file.getSize());

     return type+"\t"+name+"\t"+to_string(size);
 }

BaseCommand* LsCommand::clone(vector<BaseCommand *> &history)  {

    BaseCommand* copy = new LsCommand(getArgs());
    return copy;
}









