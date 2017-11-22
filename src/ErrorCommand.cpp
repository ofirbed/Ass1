//
// Created by ofirbed on 16/11/17.
//

#include <iostream>
#include <sstream>
#include <iterator>
#include "../include/Commands.h"

ErrorCommand::ErrorCommand(string args) : BaseCommand(args){}

void ErrorCommand::execute(FileSystem &fs) {

    istringstream iss(getArgs());

    vector<string> array{istream_iterator<string>{iss},
                         istream_iterator<string>{}};

    std::cout << array[0] + ": Unknown command" << std::endl;
}

string ErrorCommand::toString() {
    return "error";
}
BaseCommand* ErrorCommand::clone(vector<BaseCommand *> &history) {
    BaseCommand* copy = new ErrorCommand(getArgs());
    return copy;
}