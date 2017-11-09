//
// Created by chaimbgu on 07/11/17.
//

#include "Files.h"
using namespace std;
BaseFile::BaseFile(string name):name(name) {

}
string BaseFile::getName() const {return name;}

void BaseFile::setName(string newName) {
    name = newName;
}


