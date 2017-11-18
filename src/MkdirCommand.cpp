//
// Created by chaimbgu on 12/11/17.
//
#include "../include/Commands.h"
#include <iostream>
#include <iostream>
#include <algorithm>
#include <array>
#include <iostream>
#include <functional>
#include <sstream>



#include <iterator>

using  namespace std;
MkdirCommand::MkdirCommand(string args): BaseCommand(args){}

void MkdirCommand::execute(FileSystem &fs) {//*******right now we assume that the path not include files******
    string path = getArgs();
Directory * workingDirectory = &fs.getWorkingDirectory();//save the curr working directory
if(fs.cdCommand(path)==1) {//that mean the dir is already exist
    std::cout << "the directory already exist"<< std::endl;
    fs.setWorkingDirectory(workingDirectory);//return to the prev working directory
    return;
}
if(path.at(0)=='/') {//if start from root we do cd to root
    fs.cdCommand("/");
    path = path.substr(1);
}
    std::replace(path.begin(), path.end(), '/', ' ');  // replace ':' by ' '

    /*vector<string> array;//put the path into vector
    stringstream ss(path);
    string temp;
    while (ss >> temp)
        array.push_back(temp);*/

    istringstream iss(path);

    vector<string> array{istream_iterator<string>{iss},
                         istream_iterator<string>{}};

    bool flag = false;//to know when we need to stop doing cd and start making directory
    for(int i=0;i<array.size();i++){
        if(!flag){
            if(fs.cdCommand(array.at(i))== 0)//the file dont exist and need to create
                flag= true;//from now need to create files
        }
        if(flag){
            fs.getWorkingDirectory().pushToChildren(new Directory (array[i],&fs.getWorkingDirectory()));
            fs.cdCommand(array.at(i));
        }
    }
    fs.setWorkingDirectory(workingDirectory);//return the the prev working directory



}
string MkdirCommand::toString() {
    return  "mkdir";
};