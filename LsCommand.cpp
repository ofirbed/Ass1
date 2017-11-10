//
// Created by ofirbed on 10/11/17.
//

#include "Commands.h"

LsCommand:: LsCommand(string args) : BaseCommand(args){};

void LsCommand ::execute(FileSystem &fs) {

    Directory &workingDirectory = fs.getWorkingDirectory();
    vector<BaseFile*> files = workingDirectory.getChildren();


}

string LsCommand::toString() {



}






