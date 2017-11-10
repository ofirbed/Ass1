//
// Created by chaimbgu on 10/11/17.
//

#include "Commands.h"
using namespace std;

CdCommand::CdCommand(string args) :BaseCommand(args){

void CdCommand::execute(FileSystem &fs){
    fs.cdCommand(args);


    }
}