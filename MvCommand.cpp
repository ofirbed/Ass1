//
// Created by ofirbed on 14/11/17.
//

#include <sstream>
#include "Commands.h"
#include <iterator>
#include <iostream>

using namespace std;

MvCommand ::MvCommand(string args) : BaseCommand(args) {};

void MvCommand::execute(FileSystem &fs) {

    string args(getArgs());
    istringstream iss(args);

    vector<string> array{istream_iterator<string>{iss},     //split to array of source and destination
                         istream_iterator<string>{}};

    if(array.size()==2){
        string source(array[0]);
        string destination= array[1];



















    }else{
        std::cout << "args dont match" << std::endl;        //print it if there is not 2 args
    }



};

string MvCommand ::toString() {};