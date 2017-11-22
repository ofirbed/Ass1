//
// Created by ofirbed on 10/11/17.
//

#include <iostream>
#include <algorithm>
#include "../include/Environment.h"
#include "../include/GlobalVariables.h"
#include <array>
#include <functional>
#include <sstream>


#include <iterator>
using namespace std;
//extern  unsigned  int verbose;
Environment::Environment() :commandsHistory(),fs() {};

void Environment ::start() {

    std::cout << fs.getWorkingDirectory().getAbsolutePath();
    std::cout << ">";

    string userInput;
    getline(cin, userInput);


    while (userInput != "exit") {
        if((verbose ==2) |(verbose ==3))
            cout<<userInput<<std::endl;

        istringstream iss(userInput);

        vector<string> array{istream_iterator<string>{iss},
                             istream_iterator<string>{}};


        if(array.size()>0) {
            if ((array.at(0).compare("pwd") == 0) &( array.size() == 1)) {  //check if there is args after the command

                    BaseCommand *pwd = new PwdCommand("");
                    addToHistory(pwd);
                    pwd->execute(fs);

            } else {
                if ((array.at(0).compare("cd") == 0)&( array.size() != 1)) {    //check if path after the command is exist
                        BaseCommand *cd = new CdCommand(userInput.substr(3));
                        addToHistory(cd);
                        cd->execute(fs);

                } else {
                    if (array.at(0).compare("ls") == 0) {
                        int charToSend = 0;
                        if (array.size() == 1)
                            charToSend = 2;
                        else
                            charToSend = 3;
                        BaseCommand *ls = new LsCommand(userInput.substr(charToSend));
                        addToHistory(ls);
                        ls->execute(fs);

                    } else {
                        if ((array.at(0).compare("mkdir") == 0 )&( array.size() == 2)) {

                            BaseCommand *mkdir = new MkdirCommand(userInput.substr(6));
                            addToHistory(mkdir);
                            mkdir->execute(fs);

                        } else {
                            if ((array.at(0).compare("mkfile") == 0) &( ((array.size() == 2) | (array.size() == 3)))) {

                                BaseCommand *mkfile = new MkfileCommand(userInput.substr(7));
                                addToHistory(mkfile);
                                mkfile->execute(fs);

                            } else {
                                if (array.at(0).compare("cp") == 0) {

                                    BaseCommand *cp = new CpCommand(userInput.substr(3));
                                    addToHistory(cp);
                                    cp->execute(fs);

                                } else {
                                    if (array.at(0).compare("mv") == 0) {

                                        BaseCommand *mv = new MvCommand(userInput.substr(3));
                                        addToHistory(mv);
                                        mv->execute(fs);
                                    } else {
                                        if (array.at(0).compare("rename") == 0) {

                                            BaseCommand *rename = new RenameCommand(userInput.substr(7));
                                            addToHistory(rename);
                                            rename->execute(fs);

                                        } else {
                                            if (array.at(0).compare("rm") == 0) {

                                                BaseCommand *rm = new RmCommand(userInput.substr(3));
                                                addToHistory(rm);
                                                rm->execute(fs);

                                            } else {

                                                if (array.at(0).compare("history") == 0) {

                                                    BaseCommand *hs = new HistoryCommand("", commandsHistory);
                                                    hs->execute(fs);
                                                    addToHistory(hs);


                                                } else {
                                                    if(array.at(0).compare("verbose")==0){
                                                        BaseCommand* verbosC=new VerboseCommand(userInput.substr(8));
                                                        addToHistory(verbosC);
                                                        verbosC->execute(fs);

                                                    }else {
                                                        if(array.at(0).compare("exec")==0){
                                                            BaseCommand* exec=new ExecCommand(userInput.substr(5),commandsHistory);
                                                            addToHistory(exec);
                                                            exec->execute(fs);

                                                        }else {

                                                            BaseCommand *error = new ErrorCommand(userInput);
                                                            addToHistory(error);
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
            }
        }

            std::cout << fs.getWorkingDirectory().getAbsolutePath();
            std::cout << ">";
            getline(cin, userInput);
        }




        return;

}


FileSystem& Environment::getFileSystem()  {

    return fs;

}

const vector<BaseCommand*>& Environment::getHistory() const {

    return commandsHistory;

}

void Environment::addToHistory(BaseCommand *command) {
    commandsHistory.push_back(command);


}


Environment::~Environment() {
    if((verbose==1)|(verbose==3))
        cout<<"~Environment()"<<std::endl;
    for(unsigned int i=0;i<commandsHistory.size();i++){
        delete(commandsHistory[i]);
    }
}

Environment::Environment(const Environment &other):commandsHistory(),fs(other.fs) {
    if((verbose==1)|(verbose==3))
        cout<<"Environment(const Environment &other)"<<std::endl;
    for(unsigned int i=0;i<other.commandsHistory.size();i++) {
        BaseCommand *base = other.commandsHistory.at(i);
        BaseCommand* copyBase = base->clone(commandsHistory);
        commandsHistory.push_back(copyBase);
    }
}
Environment::Environment(Environment &&other):commandsHistory(other.commandsHistory),fs(other.fs) {
    if((verbose==1)|(verbose==3))
        cout<<"Environment(Environment &&other)"<<std::endl;
    other.commandsHistory.clear();
}
Environment& Environment::operator=(const Environment &other) {
    if((verbose==1)|(verbose==3))
        cout<<"Environment& operator=(const Environment &other)"<<std::endl;
    if(this!= &other){
        commandsHistory.clear();
        for(unsigned int i=0;i<other.commandsHistory.size();i++) {
            BaseCommand *base = other.commandsHistory.at(i);
            commandsHistory.push_back(base->clone(commandsHistory));
        }
        fs=other.fs;
    }
    return *this;

}
Environment& Environment::operator=(Environment &&other) {
    if((verbose==1)|(verbose==3))
        cout<<"Environment& operator=(Environment &&other)"<<std::endl;
    if(this!= &other){
        commandsHistory.clear();
        commandsHistory = other.commandsHistory;
        fs=other.fs;
        other.commandsHistory.clear();
    }
    return *this;

}