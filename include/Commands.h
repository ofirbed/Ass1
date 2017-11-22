#ifndef COMMANDS_H_
#define COMMANDS_H_

#include <string>
#include "FileSystem.h"



class BaseCommand {
private:
	string args;

public:
	BaseCommand(string args);
	string getArgs();
	virtual void execute(FileSystem & fs) = 0;
	virtual string toString() = 0;
	virtual ~BaseCommand();
	virtual BaseCommand* clone(vector<BaseCommand*> &history)=0 ;
};

class PwdCommand : public BaseCommand {
private:
public:
	PwdCommand(string args);
	void execute(FileSystem & fs); // Every derived class should implement this function according to the document (pdf)
	virtual string toString();
	virtual BaseCommand* clone(vector<BaseCommand*> &history);
};

class CdCommand : public BaseCommand {
private:
public:
	CdCommand(string args);
	void execute(FileSystem & fs);
	string toString();
	virtual BaseCommand* clone(vector<BaseCommand*> &history);
};

class LsCommand : public BaseCommand {
private:
public:
	LsCommand(string args);
	void execute(FileSystem & fs);
	string toString();
	string getFileDetails(BaseFile &file);
	Directory* getDirectory(string args, FileSystem &fs);
	virtual BaseCommand* clone(vector<BaseCommand*> &history);
};

class MkdirCommand : public BaseCommand {
private:
public:
	MkdirCommand(string args);
	void execute(FileSystem & fs);
	string toString();
	virtual BaseCommand* clone(vector<BaseCommand*> &history);
};

class MkfileCommand : public BaseCommand {
private:
public:
	MkfileCommand(string args);
	void execute(FileSystem & fs);
	string toString();
	virtual BaseCommand* clone(vector<BaseCommand*> &history);
};

class CpCommand : public BaseCommand {
private:
public:
	CpCommand(string args);
	void execute(FileSystem & fs);
	string toString();
	virtual BaseCommand* clone(vector<BaseCommand*> &history);
};

class MvCommand : public BaseCommand {
private:
public:
	MvCommand(string args);
	void execute(FileSystem & fs);
	string toString();
	virtual BaseCommand* clone(vector<BaseCommand*> &history);
};

class RenameCommand : public BaseCommand {
private:
public:
	RenameCommand(string args);
	void execute(FileSystem & fs);
	string toString();
	virtual BaseCommand* clone(vector<BaseCommand*> &history);
};

class RmCommand : public BaseCommand {
private:
public:
	RmCommand(string args);
	void execute(FileSystem & fs);
	string toString();
	void DeleteBaseFile(BaseFile *baseFile,string pathOfParentDir,FileSystem &fs);
	virtual BaseCommand* clone(vector<BaseCommand*> &history);
};

class HistoryCommand : public BaseCommand {
private:
	const vector<BaseCommand *> & history;
public:
	HistoryCommand(string args, const vector<BaseCommand *> & history);
	void execute(FileSystem & fs);
	string toString();
	virtual BaseCommand* clone(vector<BaseCommand*> &history);
};


class VerboseCommand : public BaseCommand {
private:
public:
	VerboseCommand(string args);
	void execute(FileSystem & fs);
	string toString();
	virtual BaseCommand* clone(vector<BaseCommand*> &history);
};

class ErrorCommand : public BaseCommand {
private:
public:
	ErrorCommand(string args);
	void execute(FileSystem & fs);
	string toString();
	virtual BaseCommand* clone(vector<BaseCommand*> &history);
};

class ExecCommand : public BaseCommand {
private:
	const vector<BaseCommand *> & history;
public:
	ExecCommand(string args, const vector<BaseCommand *> & history);
	void execute(FileSystem & fs);
	string toString();
	virtual BaseCommand* clone(vector<BaseCommand*> &history);
};


#endif
