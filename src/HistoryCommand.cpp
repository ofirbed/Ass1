//
// Created by ofirbed on 16/11/17.
//

#include <iostream>
#include "../include/Commands.h"

HistoryCommand::HistoryCommand(string args, const vector<BaseCommand *> &history) :BaseCommand(args), history(history){


}


void HistoryCommand::execute(FileSystem &fs) {

    for(unsigned int i=0;i<history.size();i++){
        string output;
        if(history[i]->toString().compare("error")==0)
             output = to_string(i) +"\t"+ history[i]->getArgs();
        else
             output = to_string(i) +"\t"+ history[i]->toString()+" "+history[i]->getArgs();
        std::cout << output << std::endl;
    }
}


string HistoryCommand::toString() {

    return "history";
}
BaseCommand* HistoryCommand::clone(vector<BaseCommand *> &history) {
    BaseCommand* copy = new HistoryCommand(getArgs(),history);
    return copy;
}