//
// Created by chaimbgu on 07/11/17.
//

#include <algorithm>
#include <iostream>
#include "../include/Files.h"
using namespace std;
extern signed int verbose;
Directory::Directory(string name, Directory *parent) :BaseFile(name),children(),parent(parent){
    //this->parent=parent;
}


Directory::~Directory() {
    if((verbose==1)|(verbose==3))
        cout<<"~Directory()"<<std::endl;

    int childSize= getChildren().size();
    clear(childSize);
}

void Directory::clear(int childSize) {

    for (int i = 0; i < childSize; i++) {
        BaseFile *child = getChildren().at(0);

            children.erase(children.begin());
            delete (child);
        }

    }

    //delete (children);






Directory::Directory(const Directory &other):BaseFile(other.getName()),children(),parent(){//copy costructor
    if((verbose==1)|(verbose==3))
        cout<<"Directory(const Directory &other)"<<std::endl;
    parent = other.parent;
    for(unsigned int i=0;i<other.children.size();i++){
        children.push_back(other.children.at(i)->clone());
    }
}


BaseFile* Directory::clone() {
    Directory* dir= new Directory(getName(),getParent());
    for (unsigned int i=0;i<children.size();i++){
        BaseFile * child = children.at(i)->clone();
        if(child->getType().compare("DIR")==0){
            Directory*  childptr = (Directory*)child;
            childptr->setParent(dir);
        }
        dir->pushToChildren(child);

    }
    return dir;


}
Directory::Directory(Directory &&other):BaseFile(getName()),children(other.children),parent(other.parent) {
    if((verbose==1)|(verbose==3))
        cout<<"Directory(Directory &&other)"<<std::endl;
    other.parent= nullptr;
    other.children.clear();
}

Directory& Directory::operator=(const Directory &other) {//assignment operator
    if((verbose==1)|(verbose==3))
        cout<<"Directory& operator=(const Directory &other)"<<std::endl;
    if(this!= &other){
        clear(getChildren().size());
        parent = other.parent;
        for(unsigned int i=0;i<other.children.size();i++){
            children.push_back(other.children.at(i)->clone());
        }
    }
    return *this;
}

Directory& Directory::operator=(Directory &&other) {//move assignment
    if((verbose==1)|(verbose==3))
        cout<<"Directory& operator=(Directory &&other)"<<std::endl;
    if(this!= &other) {
        clear(getChildren().size());
        parent=other.parent;
        children=other.children;
        other.parent= nullptr;
        other.children.clear();
    }
    return *this;

}










Directory* Directory::getParent() const {return parent;}
void Directory::setParent(Directory *newParent) {parent=newParent;}
void Directory::addFile(BaseFile *file) {
    children.push_back(file);


}
void Directory::removeFile(string name) {
    int counter(0);
    for(BaseFile* file : children){
        if(file->getName().compare(name)==0 && file->getType().compare("FILE")==0){
            File *file = (File*)(children.at(counter));
            delete (file);
            children.erase(children.begin()+counter);
        }
        counter++;
    }

}


void Directory::removeDir(string name) {
    int counter(0);
    for(BaseFile* file : children){
        if(file->getName().compare(name)==0 && file->getType().compare("DIR")==0){
            //Directory *dir = (Directory*)(children.at(counter));
            delete file;
            children.erase(children.begin()+counter);
        }
        counter++;
    }

}

bool Directory::ThereIsChildWithThatName(string name) {

    bool thereIs = false;

    for(BaseFile* file : getChildren()){

        if(file->getName().compare(name)==0)
            thereIs=true;

    }

    return thereIs;
}




void Directory::removeFromChildrenDirOrFile(string name) {
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


    /* int counter(0);
     for(BaseFile* file : children){
         if(file->getName().compare(minName)==0){
             children.erase(children.begin()+counter);
         }
         counter++;
     }*/
     removeFromChildrenDirOrFile(minName);
     children.push_back(minDirectory);
     size--;
 }
}
void Directory::sortBySize() {
    if (children.size() == 0)
        return;
    int size = children.size();
    while (size > 0) {
        int minSize = children.at(0)->getSize();
        BaseFile *minDirectory = children.at(0);

        for (int i = 1; i < size; i++) {
            int currSize = children.at(i)->getSize();
            if (currSize < minSize) {//check by size
                minSize = currSize;
                minDirectory = children.at(i);
            } else if (currSize == minSize) {//if size equal check by name
                if (children.at(i)->getName().compare(minDirectory->getName()) < 0) {
                    minSize = currSize;
                    minDirectory = children.at(i);
                }

            }
        }
        //remove the min from the vector and then add it to the enf of the list
       /* int counter(0);
        for (BaseFile *file : children) {
            if (file->getName().compare(minDirectory->getName()) == 0) {
                children.erase(children.begin() + counter);
            }
            counter++;
        }*/
        removeFromChildrenDirOrFile(minDirectory->getName());
        children.push_back(minDirectory);
        size--;
    }
}

vector<BaseFile*> Directory::getChildren() {return children;}

void Directory ::pushToChildren(BaseFile * file) {

    children.push_back(file);
}


int Directory::getSize() {
    int size = 0;
    for (unsigned int i = 0; i < children.size(); i++) {
        size = size + children.at(i)->getSize();
    }
    return size;
}

/*string Directory::getAbsolutePath() {
    if(parent==NULL)
        return "/";
    return parent->getAbsolutePath()+"/"+getName();//write the absolute path recursively


}
Directory* Directory::getDirChildByName(string name) {
    for( int i=0;i<children.size();i++){

        if(name.compare(children.at(i)->getName())==0&&children.at(i)->getType().compare("DIR")==0)
            return (Directory*)children.at(i);
        return NULL;
    }

}*/



string Directory::getAbsolutePath() {
    if(parent==NULL)
        return "/";
    return getAbsolutePathWithouRoot();

}

string Directory::getAbsolutePathWithouRoot() {
    if(parent==NULL)
        return "";
    return parent->getAbsolutePathWithouRoot()+"/"+getName();//write the absolute path recursively
}

BaseFile* Directory::getDirChildByName(string name) {
    for(unsigned int i=0;i<children.size();i++){

        if(name.compare(children.at(i)->getName())==0)
            return children.at(i);

    }
    return NULL;

}

string Directory::getType() {
    return "DIR";
}


