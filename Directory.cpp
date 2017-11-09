//
// Created by chaimbgu on 07/11/17.
//

#include <algorithm>
#include "Files.h"
using namespace std;
Directory::Directory(string name, Directory *parent) :BaseFile(name){
    this->parent=parent;
}

Directory* Directory::getParent() const {return parent;}
void Directory::setParent(Directory *newParent) {parent=newParent;}
void Directory::addFile(BaseFile *file) {
    children.push_back(file);

}
void Directory::removeFile(string name) {
    int counter(0);
    for(BaseFile* file : children){
        if(file->getName().compare(name)==0){
            children.erase(children.begin()+counter);
        }
        counter++;
    }

}

void Directory::sortByName() {
 if(children.size()==0)
     return;
    int size = children.size();
 while(size>0) {
     string minName = children.at(0)->getName();
     BaseFile *minDirectory = children.at(0);

     for (int i = 1; i < size; i++) {
         string currName = children.at(i)->getName();
         if (currName.compare(minName)< 0) {
             minName = currName;
             minDirectory = children.at(i);
         }
     }
     removeFile(minName);
     children.push_back(minDirectory);
     size--;
 }
}
void Directory::sortBySize() {
    if(children.size()==0)
        return;
    int size = children.size();
    while(size>0) {
        int minSize = children.at(0)->getSize();
        BaseFile *minDirectory = children.at(0);

        for (int i = 1; i < size; i++) {
            int currSize = children.at(i)->getSize();
            if (currSize < minSize) {//check by size
                minSize = currSize;
                minDirectory = children.at(i);
            }
            else if(currSize = minSize){//if size equal check by name
                if(children.at(i)->getName().compare(minDirectory->getName())<0){
                    minSize = currSize;
                    minDirectory= children.at(i);
                }

            }
        }
        removeFile(minDirectory->getName());//remove the min from the vector and then add it to the enf of the list
        children.push_back(minDirectory);
        size--;
    }
}
vector<BaseFile*> Directory::getChildren() {return children;}


int Directory::getSize() {
    int size = 0;
    for (int i = 0; i < children.size(); i++) {
        size = size + children.at(i)->getSize();
    }
    return size;
}

string Directory::getAbsolutePath() {
    if(parent==NULL)
        return "/";
    return parent->getAbsolutePath()+"/"+getName();//write the absolute path recursively


}


