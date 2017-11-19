//
// Created by chaimbgu on 19/11/17.
//

#include "../include/Commands.h"
#include <iostream>
using  namespace std;
extern  unsigned  int verbose;
VerboseCommand::VerboseCommand(string args) :BaseCommand(args){}

void VerboseCommand::execute(FileSystem &fs) {
    if(getArgs().compare("0")!=0&&getArgs().compare("1")!=0&&getArgs().compare("2")!=0&&getArgs().compare("3")!=0){
        std::cout<<"Wrong verbose input"<<std::endl;
        return;
    }
    int num = atoi(getArgs().c_str());
    verbose = num;


}

string VerboseCommand::toString() {
    return "verbose";
}
