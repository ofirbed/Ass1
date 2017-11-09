//
// Created by chaimbgu on 07/11/17.
//

#include "Files.h"
using namespace std;
File::File(string name, int size): BaseFile(name){
    this->size=size;
}
int File::getSize() {return size;}


