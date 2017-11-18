//
// Created by chaimbgu on 07/11/17.
//

#include "../include/Files.h"
using namespace std;
File::File(string name, int size): BaseFile(name){
    this->size=size;
}
int File::getSize() {return size;}

string File::getType() {
    return "FILE";
}


BaseFile* File::clone() {
    // return new File(getName(),getSize());
    BaseFile *f = new File(getName(),getSize());
    return f;

}



