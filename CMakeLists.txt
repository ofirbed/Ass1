cmake_minimum_required(VERSION 3.8)
project(ass1)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES src/main.cpp src/BaseFile.cpp src/File.cpp src/Directory.cpp src/Environment.cpp src/LsCommand.cpp src/BaseCommand.cpp include/Files.h src/FileSystem.cpp src/PwdCommand.cpp src/CdCommand.cpp include/Commands.h include/GlobalVariables.h src/Main.cpp src/MkdirCommand.cpp src/MvCommand.cpp src/RmCommand.cpp src/MkfileCommand.cpp src/ErrorCommand.cpp src/HistoryCommand.cpp src/CpCommand.cpp src/RenameCommand.cpp)
add_executable(ass1 ${SOURCE_FILES} src/Environment.cpp src/LsCommand.cpp src/BaseCommand.cpp include/Files.h src/MvCommand.cpp src/RmCommand.cpp src/MkfileCommand.cpp src/ErrorCommand.cpp src/HistoryCommand.cpp src/CpCommand.cpp src/RenameCommand.cpp)