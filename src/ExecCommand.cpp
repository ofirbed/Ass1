//
// Created by ofirbed on 19/11/17.
//

#include <iostream>
#include "../include/Commands.h"

ExecCommand ::ExecCommand(string args, const vector<BaseCommand *> &history) :BaseCommand(args) , history(history){


}

void ExecCommand::execute(FileSystem &fs) {
     unsigned int value = atoi(getArgs().c_str());

    if((value==0) & (getArgs().compare("0")!=0))
        value=history.size()+1;

    if(history.size()>value){

        history[value]->execute(fs);
    } else
        std::cout<<"Command not found"<<std::endl;
}


string ExecCommand::toString() {

    return "exec";
}

