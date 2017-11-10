//
// Created by ofirbed on 10/11/17.
//

#include <iostream>
#include <algorithm>
#include "Environment.h"
#include <array>
#include <functional>
#include <sstream>
using namespace std;

Environment::Environment(

);

void Environment ::start() {

    std::cout << fs.getWorkingDirectory().getName() + ">" << std::endl;


    string userInput;
    std:: cin >> userInput;

    while(userInput!="exit"){



       //separate the word by ' ' to recognize the command
        vector<string> array;
        stringstream ss(userInput);
        string temp;
        while (ss >> temp)
            array.push_back(temp);

        if(array.at(0).compare("pwd")==0) {

            if (array.size() != 1)      //check if there is args after the command
                printError("pwd args is not needed");
            else {

                PwdCommand pwd("");
                pwd.execute(fs);
            }
        }
        else{
                if (array.at(0).compare("cd") == 0) {

                    if (array.size() == 1)      //check if path after the command is exist
                        printError("there is no path follow the command");
                    else {

                        CdCommand cd(userInput.substr(3));
                        cd.execute(fs);
                    }
                }
            }


        std:: cin >> userInput;
    }


    return; //return to menu and destruct all the objects;

}

 void Environment::  printError(string str){


     cout << "str";

}

