//
// Created by chaimbgu on 07/11/17.
//

#include <algorithm>
#include "Files.h"
using namespace std;
Directory::Directory(string name, Directory *parent) :BaseFile(name){
    this->parent=parent;
}
//Directory::Directory (const Directory* other):BaseFile(other->getName()){

//}
//void operator = (const Directory&other){
    //this->setName(other.getName());
  //  parent = parent

//}
//Directory* clone(){
  //  return new Directory(*this);
//}

Directory::~Directory() {

    clear();
}

void Directory::clear() {

    for (int i = 0; i < getChildren().size(); i++) {
        BaseFile *child = getChildren().at(i);
        if (child->getType().compare("FILE") == 0) {     //if the basefile is a file
            removeFile(child->getName());
        } else {
            children.erase(children.begin()+i);
            delete (child);
        }

    }

    //delete (children);
}

Directory::Directory( const  Directory &other):BaseFile(other.getName()){//copy costructor
    parent = other.parent;
    for(int i=0;i<other.children.size();i++){
        children.push_back(other.children.at(i)->clone());
    }
}
/*Directory::Directory(Directory &&other):BaseFile(other.getName()),parent(other.getParent()) ,children(other.getChildren()){//move constructor

    other.parent= NULL;
    other.children=NULL;

}*/


BaseFile* Directory::clone() {
    Directory* dir= new Directory(getName(),getParent());
    for (int i=0;i<children.size();i++){
        dir->children.push_back(children.at(i)->clone());
    }
    return dir;


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


     int counter(0);
     for(BaseFile* file : children){
         if(file->getName().compare(minName)==0){
             children.erase(children.begin()+counter);
         }
         counter++;
     }
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
            } else if (currSize = minSize) {//if size equal check by name
                if (children.at(i)->getName().compare(minDirectory->getName()) < 0) {
                    minSize = currSize;
                    minDirectory = children.at(i);
                }

            }
        }
        //remove the min from the vector and then add it to the enf of the list
        int counter(0);
        for (BaseFile *file : children) {
            if (file->getName().compare(minDirectory->getName()) == 0) {
                children.erase(children.begin() + counter);
            }
            counter++;
        }
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
    for (int i = 0; i < children.size(); i++) {
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
    for( int i=0;i<children.size();i++){

        if(name.compare(children.at(i)->getName())==0)
            return children.at(i);

    }
    return NULL;

}

string Directory::getType() {
    return "DIR";
}


