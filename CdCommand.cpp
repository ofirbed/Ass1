//
// Created by chaimbgu on 10/11/17.
//

#include "Commands.h"
#include <iostream>
#include <algorithm>
#include <array>
#include <iostream>
#include <functional>

#include <string>
#include <sstream>
using namespace std;

CdCommand::CdCommand(string args) :BaseCommand(args){}

void CdCommand::execute(FileSystem &fs) {
    fs.cdCommand(getArgs());
}
    /*string path = getArgs();
    Directory *currDirectory = &fs.getWorkingDirectory();
    if (path.compare("..") == 0) {
        currDirectory = currDirectory->getParent();
        if (currDirectory != NULL) {
            fs.setWorkingDirectory(currDirectory);

        } else
            std::cout << "not correct path";

    }
    if (path.at(0) == '/') {// if start from root
        path = path.substr(1);
        std::replace(path.begin(), path.end(), '/', ' ');  // replace ':' by ' '

        vector<string> array;
        stringstream ss(path);
        string temp;
        while (ss >> temp)
            array.push_back(temp);
        currDirectory = &fs.getRootDirectory();
        for (signed int i = 0; i < array.size(); i++) {
            currDirectory = currDirectory->getDirChildByName(array.at(i));
            if (currDirectory == NULL)
                std::cout << "not correct path";


        }
        fs.setWorkingDirectory(currDirectory);
    }
    std::replace(path.begin(), path.end(), '/', ' ');  // replace ':' by ' '

    vector<string> array;
    stringstream ss(path);
    string temp;
    while (ss >> temp)
        array.push_back(temp);
    currDirectory = &fs.getWorkingDirectory();
    for (signed int i = 0; i < array.size(); i++) {
        currDirectory = currDirectory->getDirChildByName(array.at(i));
        if (currDirectory == NULL)
            std::cout << "not correct path";
    }
    fs.setWorkingDirectory(currDirectory);
}*/

    string CdCommand::toString() {}
