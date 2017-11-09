cmake_minimum_required(VERSION 3.8)
project(ass1)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp BaseFile.cpp File.cpp File.h Directory.cpp Directory.h)
add_executable(ass1 ${SOURCE_FILES})