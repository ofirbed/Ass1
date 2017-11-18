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

    vector<BaseCommand *> history;

    while (userInput != "exit") {


        istringstream iss(userInput);

        vector<string> array{istream_iterator<string>{iss},
                             istream_iterator<string>{}};


        if(array.size()>0) {
            if (array.at(0).compare("pwd") == 0) {

                if (array.size() != 1)      //check if there is args after the command
                    printError("pwd args is not needed");
                else {

                    BaseCommand *pwd = new PwdCommand("");
                    history.push_back(pwd);
                    pwd->execute(fs);
                }
            } else {
                if (array.at(0).compare("cd") == 0) {

                    if (array.size() == 1)      //check if path after the command is exist
                        printError("there is no path follow the command");
                    else {

                        BaseCommand *cd = new CdCommand(userInput.substr(3));
                        history.push_back(cd);
                        cd->execute(fs);
                    }
                } else {
                    if (array.at(0).compare("ls") == 0) {
                        int charToSend = 0;
                        if (array.size() == 1)
                            charToSend = 2;
                        else
                            charToSend = 3;
                        BaseCommand *ls = new LsCommand(userInput.substr(charToSend));
                        history.push_back(ls);
                        ls->execute(fs);

                    } else {
                        if (array.at(0).compare("mkdir") == 0 & array.size() == 2) {

                            BaseCommand *mkdir = new MkdirCommand(userInput.substr(6));
                            history.push_back(mkdir);
                            mkdir->execute(fs);

                        } else {
                            if (array.at(0).compare("mkfile") == 0 & (array.size() == 2 | array.size() == 3)) {

                                BaseCommand *mkfile = new MkfileCommand(userInput.substr(7));
                                history.push_back(mkfile);
                                mkfile->execute(fs);

                            } else {
                                if (array.at(0).compare("cp") == 0) {

                                    BaseCommand *cp = new CpCommand(userInput.substr(3));
                                    history.push_back(cp);
                                    cp->execute(fs);

                                } else {
                                    if (array.at(0).compare("mv") == 0) {

                                        BaseCommand *mv = new MvCommand(userInput.substr(3));
                                        history.push_back(mv);
                                        mv->execute(fs);
                                    } else {
                                        if (array.at(0).compare("rename") == 0) {

                                            BaseCommand *rename = new RenameCommand(userInput.substr(7));
                                            history.push_back(rename);
                                            rename->execute(fs);

                                        } else {
                                            if (array.at(0).compare("rm") == 0) {

                                                BaseCommand *rm = new RmCommand(userInput.substr(3));
                                                history.push_back(rm);
                                                rm->execute(fs);

                                            } else {

                                                if (array.at(0).compare("history") == 0) {

                                                    BaseCommand *hs = new HistoryCommand(userInput, history);
                                                    hs->execute(fs);
                                                    history.push_back(hs);

                                                } else {
                                                    BaseCommand *error = new ErrorCommand(userInput);
                                                    history.push_back(error);
                                                    error->execute(fs);

                                                }


                                            }
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


    for(int i=0;i<history.size();i++){
        delete(history[i]);
    }

        return;

}


 void Environment::  printError(string str){


     std :: cout << str << std::endl;

}

