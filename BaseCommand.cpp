//
// Created by ofirbed on 09/11/17.
//

#include "Commands.h"
using namespace std;

BaseCommand ::BaseCommand(string args) : args(args){}

string BaseCommand::getArgs() {
    return args;
}

virtual void execute(FileSystem & fs);
virtual string toString();


