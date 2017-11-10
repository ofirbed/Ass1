//
// Created by ofirbed on 09/11/17.
//

#include "Commands.h"
using namespace std;


PwdCommand::PwdCommand(string args) : BaseCommand(args){};

void PwdCommand::execute(FileSystem &fs) {

    Directory workingDirectory = fs.getWorkingDirectory();

}

string PwdCommand::toString() {}









