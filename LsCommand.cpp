//
// Created by ofirbed on 10/11/17.
//

#include <iostream>
#include "Commands.h"


LsCommand:: LsCommand(string args) : BaseCommand(args){};

void LsCommand ::execute(FileSystem &fs) {

    string args(getArgs());
    Directory &workingDirectory = fs.getWorkingDirectory();

    //check if sort by size or by name
    if(args.substr(0,2).compare("-s ")==0) {
        workingDirectory.sortBySize();
        args = args.substr(3);
    } else
        workingDirectory.sortByName();


    if(args.compare("")==0 | args.compare(" ")==0) {                    //if there is no path input
        vector<BaseFile *> files = workingDirectory.getChildren();      //get all children files
        for (signed int i = 0; i < files.size(); i++) {
            string fileDetails = getFileDetails(*files.at(i));
            std::cout << fileDetails << std::endl;
        }
    }else                                                               //there is path
    {



    }



}

string LsCommand::toString() {}


//get file detail: TYPE   NAME    SIZE
string LsCommand::getFileDetails(BaseFile &file) {

     string type(file.getType());
     string name(file.getName());
     int size(file.getSize());

     return type+"\t"+name+"\t"+to_string(size);
 }











