//
// Created by ofirbed on 14/11/17.
//

#include <sstream>
#include "../include/Commands.h"
#include <iterator>
#include <iostream>

using namespace std;

MvCommand ::MvCommand(string args) : BaseCommand(args) {};

void MvCommand::execute(FileSystem &fs) {

    Directory *currDirectory = &fs.getWorkingDirectory();



    string args(getArgs());
    istringstream iss(args);

    vector<string> array{istream_iterator<string>{iss},     //split to array of source and destination
                         istream_iterator<string>{}};


        string source(array[0]);
        string destination = array[1];

        if (source.at(0) != '/')                                  //if the source is just file name, convert it to path
            source = currDirectory->getAbsolutePathWithouRoot() + "/" + source;

        if (destination.at(0) !=
            '/')                                  //if the source is just file name, convert it to path
            destination = currDirectory->getAbsolutePathWithouRoot() + "/" + destination;

        BaseFile *sourceFileOrDir = fs.getFileByPath(source);
        BaseFile *destinationDir = fs.getFileByPath(destination);

        bool sourceIsAParent = false;
        while ((fs.getWorkingDirectory().getAbsolutePath().compare("/")!=0 )& (!sourceIsAParent)) {

            if (sourceFileOrDir==&fs.getWorkingDirectory())
                sourceIsAParent = true;

            fs.cdCommand(fs.getWorkingDirectory().getParent()->getAbsolutePath());
        }

        if ((source.compare("/") == 0) | (sourceIsAParent))      //if it root or working directory
            std::cout << "Can't move directory" << std::endl;
        else {


            if (((sourceFileOrDir == nullptr) | (destinationDir == nullptr)) ||
                (destinationDir->getType() != "DIR")) {   //if one of the args is not a valid path
                std::cout << "No such file or directory" << std::endl;
            } else {

                fs.cdCommand(destination);                                      //move to destination dir

                if (!fs.getWorkingDirectory().ThereIsChildWithThatName(sourceFileOrDir->getName())) {
                    fs.getWorkingDirectory().pushToChildren(
                            sourceFileOrDir);       //add to children the pointer of the source file or dir
                    if (sourceFileOrDir->getType().compare("DIR") == 0) {
                        Directory *dir = (Directory *) sourceFileOrDir;
                        dir->setParent(&fs.getWorkingDirectory());
                    }




                    //remove the pointer from the source path
                    size_t found = source.find_last_of("/\\");
                    if (found == 0)    //it mean that the path is direct from root : EX "/newDir"
                        found = found + 1;
                    string parentSourcePath = source.substr(0, found);

                    fs.cdCommand(parentSourcePath);

                    fs.getWorkingDirectory().removeFromChildrenDirOrFile(sourceFileOrDir->getName());
                    /*int counter(0);
                    for (BaseFile *file : fs.getWorkingDirectory().getChildren()) {
                        if (file->getName().compare(sourceFileOrDir->getName()) == 0) {
                            fs.getWorkingDirectory().getChildren().erase(fs.getWorkingDirectory().getChildren().begin() + counter);
                        }
                        counter++;
                    }*/


                }
            }

        }



    fs.cdCommand(currDirectory->getAbsolutePath());
};

string MvCommand ::toString() {
    return "mv";
}

BaseCommand* MvCommand::clone(vector<BaseCommand *> &history) {
    BaseCommand* copy = new MvCommand(getArgs());
    return copy;
}
