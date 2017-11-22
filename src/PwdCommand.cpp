//
// Created by ofirbed on 09/11/17.
//

#include <iostream>
#include "../include/Commands.h"
using namespace std;


PwdCommand::PwdCommand(string args) : BaseCommand(args){};

void PwdCommand::execute(FileSystem &fs) {

    Directory *workingDirectory = &fs.getWorkingDirectory();
    std:: cout << workingDirectory->getAbsolutePath()<< std::endl;

}

string PwdCommand::toString() {
    return "pwd";
}
BaseCommand* PwdCommand::clone(vector<BaseCommand *> &history) {
    BaseCommand* copy = new PwdCommand(getArgs());
    return copy;
}









