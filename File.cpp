//
// Created by chaimbgu on 07/11/17.
//

#include "Files.h"
using namespace std;
File::File(string name, int size): BaseFile(name){//constructor
    this->size=size;
}
File::File(const File &other):BaseFile(other.getName()){//copy constructor
    size = other.getSize();
}

int File::getSize() const {return size;}

BaseFile* File::clone() {
    //return new File(getName(),getSize());
    //BaseFile *f = new File(getName(),getSize());
   // return f;

}

string File::getType() {
    return "FILE";
}





