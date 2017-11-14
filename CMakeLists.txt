cmake_minimum_required(VERSION 3.8)
project(ass1)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp BaseFile.cpp File.cpp Directory.cpp Environment.cpp LsCommand.cpp BaseCommand.cpp Files.h FileSystem.cpp PwdCommand.cpp CdCommand.cpp Commands.h GlobalVariables.h Main.cpp MkdirCommand.cpp MkfileCommand.cpp CpCommand.cpp)
add_executable(ass1 ${SOURCE_FILES} Environment.cpp LsCommand.cpp BaseCommand.cpp Files.h)