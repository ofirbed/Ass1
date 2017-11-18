all: ass1

hello: bin/BaseCommand.o bin/BaseFile.o bin/CdCommand.o bin/CpCommand.o bin/Directory.o bin/Environment.o bin/ErrorCommand.o bin/File.o bin/FileSystem.o bin/HistoryCommand.o bin/LsCommand.o bin/Main.o bin/MkdirCommand.o bin/MkfileCommand.o bin/MvCommand.o bin/PwdCommand.o bin/RenameCommand.o bin/RmCommand.o
	g++ -o bin/ass1  bin/BaseCommand.o bin/BaseFile.o bin/CdCommand.o bin/CpCommand.o bin/Directory.o bin/Environment.o bin/ErrorCommand.o bin/File.o bin/FileSystem.o bin/HistoryCommand.o bin/LsCommand.o bin/Main.o bin/MkdirCommand.o bin/MkfileCommand.o bin/MvCommand.o bin/PwdCommand.o bin/RenameCommand.o bin/RmCommand.o

bin/BaseCommand.o: BaseCommand.cpp
	g++ -g -Wall -Weffc++ -std=c++11 -c -Iinclude -o bin/BaseCommand.o BaseCommand.cpp
bin/BaseFile.o: BaseFile.cpp
	g++ -g -Wall -Weffc++ -std=c++11 -c -Iinclude -o bin/BaseFile.o BaseFile.cpp

bin/CdCommand.o: CdCommand.cpp
	g++ -g -Wall -Weffc++ -std=c++11 -c -Iinclude -o bin/CdCommand.o CdCommand.cpp

bin/CpCommand.o: CpCommand.cpp
	g++ -g -Wall -Weffc++ -std=c++11 -c -Iinclude -o bin/CpCommand.o CpCommand.cpp

bin/Directory.o: Directory.cpp
	g++ -g -Wall -Weffc++ -std=c++11 -c -Iinclude -o bin/Directory.o Directory.cpp

bin/Environment.o: Environment.cpp
	g++ -g -Wall -Weffc++ -std=c++11 -c -Iinclude -o bin/Environment.o Environment.cpp

bin/ErrorCommand.o: ErrorCommand.cpp
	g++ -g -Wall -Weffc++ -std=c++11 -c -Iinclude -o bin/ErrorCommand.o ErrorCommand.cpp

bin/File.o: File.cpp
	g++ -g -Wall -Weffc++ -std=c++11 -c -Iinclude -o bin/File.o File.cpp

bin/FileSystem.o: FileSystem.cpp
	g++ -g -Wall -Weffc++ -std=c++11 -c -Iinclude -o bin/FileSystem.o FileSystem.cpp

bin/HistoryCommand.o: HistoryCommand.cpp
	g++ -g -Wall -Weffc++ -std=c++11 -c -Iinclude -o bin/HistoryCommand.o HistoryCommand.cpp

bin/LsCommand.o: LsCommand.cpp
	g++ -g -Wall -Weffc++ -std=c++11 -c -Iinclude -o bin/LsCommand.o LsCommand.cpp

bin/Main.o: Main.cpp
	g++ -g -Wall -Weffc++ -std=c++11 -c -Iinclude -o bin/Main.o Main.cpp

bin/MkdirCommand.o: MkdirCommand.cpp
	g++ -g -Wall -Weffc++ -std=c++11 -c -Iinclude -o bin/MkdirCommand.o MkdirCommand.cpp

bin/MkfileCommand.o: MkfileCommand.cpp
	g++ -g -Wall -Weffc++ -std=c++11 -c -Iinclude -o bin/MkfileCommand.o MkfileCommand.cpp

bin/MvCommand.o: MvCommand.cpp
	g++ -g -Wall -Weffc++ -std=c++11 -c -Iinclude -o bin/MvCommand.o MvCommand.cpp

bin/PwdCommand.o: PwdCommand.cpp
	g++ -g -Wall -Weffc++ -std=c++11 -c -Iinclude -o bin/PwdCommand.o PwdCommand.cpp

bin/RenameCommand.o: RenameCommand.cpp
	g++ -g -Wall -Weffc++ -std=c++11 -c -Iinclude -o bin/RenameCommand.o RenameCommand.cpp

bin/BaseCommand.o: BaseCommand.cpp
	g++ -g -Wall -Weffc++ -std=c++11 -c -Iinclude -o bin/BaseCommand.o BaseCommand.cpp

bin/RmCommand.o: RmCommand.cpp
	g++ -g -Wall -Weffc++ -std=c++11 -c -Iinclude -o bin/RmCommand.o RmCommand.cpp






