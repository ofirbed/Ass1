//
// Created by ofirbed on 16/11/17.
//

#include <iostream>
#include "Commands.h"

ErrorCommand::ErrorCommand(string args) : BaseCommand(args){}

void ErrorCommand::execute(FileSystem &fs) {

    std::cout << getArgs() + ": Unknown command" << std::endl;
}

string ErrorCommand::toString() {
    return "error";
}