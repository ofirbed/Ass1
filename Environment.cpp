//
// Created by ofirbed on 10/11/17.
//

#include <iostream>
#include <algorithm>
#include "Environment.h"
#include <array>
#include <functional>
#include <sstream>


#include <iterator>
using namespace std;

Environment::Environment(){};

void Environment ::start() {

    std::cout << fs.getWorkingDirectory().getAbsolutePath() + " ";
    std::cout << ">";

    string userInput;
    getline(cin, userInput);

    while (userInput != "exit") {


        istringstream iss(userInput);

        vector<string> array{istream_iterator<string>{iss},
                             istream_iterator<string>{}};

        if (array.at(0).compare("pwd") == 0) {

            if (array.size() != 1)      //check if there is args after the command
                printError("pwd args is not needed");
            else {

                PwdCommand pwd("");
                pwd.execute(fs);
            }
        } else {
            if (array.at(0).compare("cd") == 0) {

                if (array.size() == 1)      //check if path after the command is exist
                    printError("there is no path follow the command");
                else {

                    CdCommand cd(userInput.substr(3));
                    cd.execute(fs);
                }
            } else {
                if (array.at(0).compare("ls") == 0) {

                    LsCommand cd(userInput.substr(3));
                    cd.execute(fs);
                } else {
                    if (array.at(0).compare("mkdir") == 0) {

                        MkdirCommand mkdir(userInput.substr(6));
                        mkdir.execute(fs);

                    } else {
                        if (array.at(0).compare("mkfile") == 0) {

                            MkfileCommand mkfile(userInput.substr(7));
                            mkfile.execute(fs);

                        } else {
                            if (array.at(0).compare("cp") == 0) {

                                CpCommand cp(userInput.substr(3));
                                cp.execute(fs);

                            } else {
                                if (array.at(0).compare("mv") == 0) {

                                    MvCommand mv(userInput.substr(3));
                                    mv.execute(fs);
                                } else {
                                    if (array.at(0).compare("rename") == 0) {

                                        RenameCommand rename(userInput.substr(7));
                                        rename.execute(fs);

                                    } else {
                                        if (array.at(0).compare("rm") == 0) {

                                            RmCommand rm(userInput.substr(3));
                                            rm.execute(fs);

                                        }
                                    }

                                }
                            }
                        }

                    }


                }

            }
        }

            std::cout << fs.getWorkingDirectory().getAbsolutePath() + " ";
            std::cout << ">";
            getline(cin, userInput);
        }

        return;

}


 void Environment::  printError(string str){


     std :: cout << str << std::endl;

}

