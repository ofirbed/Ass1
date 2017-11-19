#ifndef FILESYSTEM_H_
#define FILESYSTEM_H_

#include "Files.h"
using namespace std;

class FileSystem {
private:
	Directory* rootDirectory;
	Directory* workingDirectory;
public:
	FileSystem();
	Directory& getRootDirectory() const; // Return reference to the root directory
	Directory& getWorkingDirectory() const; // Return reference to the working directory
	void setWorkingDirectory(Directory *newWorkingDirectory); // Change the working directory of the file system
    int cdCommand(string path);
	BaseFile* getFileByPath(string path);

	FileSystem( const  FileSystem &other);
    FileSystem(FileSystem &&other);
    FileSystem& operator=(const FileSystem &other);
	FileSystem&operator=(FileSystem&& other);
    virtual  ~FileSystem();

};


#endif
