# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/ofirbed/Downloads/clion-2017.2.3/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/ofirbed/Downloads/clion-2017.2.3/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ofirbed/Desktop/Ass1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ofirbed/Desktop/Ass1/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ass1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ass1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ass1.dir/flags.make

CMakeFiles/ass1.dir/main.cpp.o: CMakeFiles/ass1.dir/flags.make
CMakeFiles/ass1.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ofirbed/Desktop/Ass1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ass1.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ass1.dir/main.cpp.o -c /home/ofirbed/Desktop/Ass1/main.cpp

CMakeFiles/ass1.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ass1.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ofirbed/Desktop/Ass1/main.cpp > CMakeFiles/ass1.dir/main.cpp.i

CMakeFiles/ass1.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ass1.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ofirbed/Desktop/Ass1/main.cpp -o CMakeFiles/ass1.dir/main.cpp.s

CMakeFiles/ass1.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/ass1.dir/main.cpp.o.requires

CMakeFiles/ass1.dir/main.cpp.o.provides: CMakeFiles/ass1.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/ass1.dir/build.make CMakeFiles/ass1.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/ass1.dir/main.cpp.o.provides

CMakeFiles/ass1.dir/main.cpp.o.provides.build: CMakeFiles/ass1.dir/main.cpp.o


CMakeFiles/ass1.dir/BaseFile.cpp.o: CMakeFiles/ass1.dir/flags.make
CMakeFiles/ass1.dir/BaseFile.cpp.o: ../BaseFile.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ofirbed/Desktop/Ass1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ass1.dir/BaseFile.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ass1.dir/BaseFile.cpp.o -c /home/ofirbed/Desktop/Ass1/BaseFile.cpp

CMakeFiles/ass1.dir/BaseFile.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ass1.dir/BaseFile.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ofirbed/Desktop/Ass1/BaseFile.cpp > CMakeFiles/ass1.dir/BaseFile.cpp.i

CMakeFiles/ass1.dir/BaseFile.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ass1.dir/BaseFile.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ofirbed/Desktop/Ass1/BaseFile.cpp -o CMakeFiles/ass1.dir/BaseFile.cpp.s

CMakeFiles/ass1.dir/BaseFile.cpp.o.requires:

.PHONY : CMakeFiles/ass1.dir/BaseFile.cpp.o.requires

CMakeFiles/ass1.dir/BaseFile.cpp.o.provides: CMakeFiles/ass1.dir/BaseFile.cpp.o.requires
	$(MAKE) -f CMakeFiles/ass1.dir/build.make CMakeFiles/ass1.dir/BaseFile.cpp.o.provides.build
.PHONY : CMakeFiles/ass1.dir/BaseFile.cpp.o.provides

CMakeFiles/ass1.dir/BaseFile.cpp.o.provides.build: CMakeFiles/ass1.dir/BaseFile.cpp.o


CMakeFiles/ass1.dir/File.cpp.o: CMakeFiles/ass1.dir/flags.make
CMakeFiles/ass1.dir/File.cpp.o: ../File.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ofirbed/Desktop/Ass1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/ass1.dir/File.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ass1.dir/File.cpp.o -c /home/ofirbed/Desktop/Ass1/File.cpp

CMakeFiles/ass1.dir/File.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ass1.dir/File.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ofirbed/Desktop/Ass1/File.cpp > CMakeFiles/ass1.dir/File.cpp.i

CMakeFiles/ass1.dir/File.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ass1.dir/File.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ofirbed/Desktop/Ass1/File.cpp -o CMakeFiles/ass1.dir/File.cpp.s

CMakeFiles/ass1.dir/File.cpp.o.requires:

.PHONY : CMakeFiles/ass1.dir/File.cpp.o.requires

CMakeFiles/ass1.dir/File.cpp.o.provides: CMakeFiles/ass1.dir/File.cpp.o.requires
	$(MAKE) -f CMakeFiles/ass1.dir/build.make CMakeFiles/ass1.dir/File.cpp.o.provides.build
.PHONY : CMakeFiles/ass1.dir/File.cpp.o.provides

CMakeFiles/ass1.dir/File.cpp.o.provides.build: CMakeFiles/ass1.dir/File.cpp.o


CMakeFiles/ass1.dir/Directory.cpp.o: CMakeFiles/ass1.dir/flags.make
CMakeFiles/ass1.dir/Directory.cpp.o: ../Directory.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ofirbed/Desktop/Ass1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/ass1.dir/Directory.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ass1.dir/Directory.cpp.o -c /home/ofirbed/Desktop/Ass1/Directory.cpp

CMakeFiles/ass1.dir/Directory.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ass1.dir/Directory.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ofirbed/Desktop/Ass1/Directory.cpp > CMakeFiles/ass1.dir/Directory.cpp.i

CMakeFiles/ass1.dir/Directory.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ass1.dir/Directory.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ofirbed/Desktop/Ass1/Directory.cpp -o CMakeFiles/ass1.dir/Directory.cpp.s

CMakeFiles/ass1.dir/Directory.cpp.o.requires:

.PHONY : CMakeFiles/ass1.dir/Directory.cpp.o.requires

CMakeFiles/ass1.dir/Directory.cpp.o.provides: CMakeFiles/ass1.dir/Directory.cpp.o.requires
	$(MAKE) -f CMakeFiles/ass1.dir/build.make CMakeFiles/ass1.dir/Directory.cpp.o.provides.build
.PHONY : CMakeFiles/ass1.dir/Directory.cpp.o.provides

CMakeFiles/ass1.dir/Directory.cpp.o.provides.build: CMakeFiles/ass1.dir/Directory.cpp.o


CMakeFiles/ass1.dir/Environment.cpp.o: CMakeFiles/ass1.dir/flags.make
CMakeFiles/ass1.dir/Environment.cpp.o: ../Environment.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ofirbed/Desktop/Ass1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/ass1.dir/Environment.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ass1.dir/Environment.cpp.o -c /home/ofirbed/Desktop/Ass1/Environment.cpp

CMakeFiles/ass1.dir/Environment.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ass1.dir/Environment.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ofirbed/Desktop/Ass1/Environment.cpp > CMakeFiles/ass1.dir/Environment.cpp.i

CMakeFiles/ass1.dir/Environment.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ass1.dir/Environment.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ofirbed/Desktop/Ass1/Environment.cpp -o CMakeFiles/ass1.dir/Environment.cpp.s

CMakeFiles/ass1.dir/Environment.cpp.o.requires:

.PHONY : CMakeFiles/ass1.dir/Environment.cpp.o.requires

CMakeFiles/ass1.dir/Environment.cpp.o.provides: CMakeFiles/ass1.dir/Environment.cpp.o.requires
	$(MAKE) -f CMakeFiles/ass1.dir/build.make CMakeFiles/ass1.dir/Environment.cpp.o.provides.build
.PHONY : CMakeFiles/ass1.dir/Environment.cpp.o.provides

CMakeFiles/ass1.dir/Environment.cpp.o.provides.build: CMakeFiles/ass1.dir/Environment.cpp.o


CMakeFiles/ass1.dir/LsCommand.cpp.o: CMakeFiles/ass1.dir/flags.make
CMakeFiles/ass1.dir/LsCommand.cpp.o: ../LsCommand.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ofirbed/Desktop/Ass1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/ass1.dir/LsCommand.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ass1.dir/LsCommand.cpp.o -c /home/ofirbed/Desktop/Ass1/LsCommand.cpp

CMakeFiles/ass1.dir/LsCommand.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ass1.dir/LsCommand.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ofirbed/Desktop/Ass1/LsCommand.cpp > CMakeFiles/ass1.dir/LsCommand.cpp.i

CMakeFiles/ass1.dir/LsCommand.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ass1.dir/LsCommand.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ofirbed/Desktop/Ass1/LsCommand.cpp -o CMakeFiles/ass1.dir/LsCommand.cpp.s

CMakeFiles/ass1.dir/LsCommand.cpp.o.requires:

.PHONY : CMakeFiles/ass1.dir/LsCommand.cpp.o.requires

CMakeFiles/ass1.dir/LsCommand.cpp.o.provides: CMakeFiles/ass1.dir/LsCommand.cpp.o.requires
	$(MAKE) -f CMakeFiles/ass1.dir/build.make CMakeFiles/ass1.dir/LsCommand.cpp.o.provides.build
.PHONY : CMakeFiles/ass1.dir/LsCommand.cpp.o.provides

CMakeFiles/ass1.dir/LsCommand.cpp.o.provides.build: CMakeFiles/ass1.dir/LsCommand.cpp.o


CMakeFiles/ass1.dir/BaseCommand.cpp.o: CMakeFiles/ass1.dir/flags.make
CMakeFiles/ass1.dir/BaseCommand.cpp.o: ../BaseCommand.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ofirbed/Desktop/Ass1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/ass1.dir/BaseCommand.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ass1.dir/BaseCommand.cpp.o -c /home/ofirbed/Desktop/Ass1/BaseCommand.cpp

CMakeFiles/ass1.dir/BaseCommand.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ass1.dir/BaseCommand.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ofirbed/Desktop/Ass1/BaseCommand.cpp > CMakeFiles/ass1.dir/BaseCommand.cpp.i

CMakeFiles/ass1.dir/BaseCommand.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ass1.dir/BaseCommand.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ofirbed/Desktop/Ass1/BaseCommand.cpp -o CMakeFiles/ass1.dir/BaseCommand.cpp.s

CMakeFiles/ass1.dir/BaseCommand.cpp.o.requires:

.PHONY : CMakeFiles/ass1.dir/BaseCommand.cpp.o.requires

CMakeFiles/ass1.dir/BaseCommand.cpp.o.provides: CMakeFiles/ass1.dir/BaseCommand.cpp.o.requires
	$(MAKE) -f CMakeFiles/ass1.dir/build.make CMakeFiles/ass1.dir/BaseCommand.cpp.o.provides.build
.PHONY : CMakeFiles/ass1.dir/BaseCommand.cpp.o.provides

CMakeFiles/ass1.dir/BaseCommand.cpp.o.provides.build: CMakeFiles/ass1.dir/BaseCommand.cpp.o


CMakeFiles/ass1.dir/FileSystem.cpp.o: CMakeFiles/ass1.dir/flags.make
CMakeFiles/ass1.dir/FileSystem.cpp.o: ../FileSystem.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ofirbed/Desktop/Ass1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/ass1.dir/FileSystem.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ass1.dir/FileSystem.cpp.o -c /home/ofirbed/Desktop/Ass1/FileSystem.cpp

CMakeFiles/ass1.dir/FileSystem.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ass1.dir/FileSystem.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ofirbed/Desktop/Ass1/FileSystem.cpp > CMakeFiles/ass1.dir/FileSystem.cpp.i

CMakeFiles/ass1.dir/FileSystem.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ass1.dir/FileSystem.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ofirbed/Desktop/Ass1/FileSystem.cpp -o CMakeFiles/ass1.dir/FileSystem.cpp.s

CMakeFiles/ass1.dir/FileSystem.cpp.o.requires:

.PHONY : CMakeFiles/ass1.dir/FileSystem.cpp.o.requires

CMakeFiles/ass1.dir/FileSystem.cpp.o.provides: CMakeFiles/ass1.dir/FileSystem.cpp.o.requires
	$(MAKE) -f CMakeFiles/ass1.dir/build.make CMakeFiles/ass1.dir/FileSystem.cpp.o.provides.build
.PHONY : CMakeFiles/ass1.dir/FileSystem.cpp.o.provides

CMakeFiles/ass1.dir/FileSystem.cpp.o.provides.build: CMakeFiles/ass1.dir/FileSystem.cpp.o


CMakeFiles/ass1.dir/PwdCommand.cpp.o: CMakeFiles/ass1.dir/flags.make
CMakeFiles/ass1.dir/PwdCommand.cpp.o: ../PwdCommand.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ofirbed/Desktop/Ass1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/ass1.dir/PwdCommand.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ass1.dir/PwdCommand.cpp.o -c /home/ofirbed/Desktop/Ass1/PwdCommand.cpp

CMakeFiles/ass1.dir/PwdCommand.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ass1.dir/PwdCommand.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ofirbed/Desktop/Ass1/PwdCommand.cpp > CMakeFiles/ass1.dir/PwdCommand.cpp.i

CMakeFiles/ass1.dir/PwdCommand.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ass1.dir/PwdCommand.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ofirbed/Desktop/Ass1/PwdCommand.cpp -o CMakeFiles/ass1.dir/PwdCommand.cpp.s

CMakeFiles/ass1.dir/PwdCommand.cpp.o.requires:

.PHONY : CMakeFiles/ass1.dir/PwdCommand.cpp.o.requires

CMakeFiles/ass1.dir/PwdCommand.cpp.o.provides: CMakeFiles/ass1.dir/PwdCommand.cpp.o.requires
	$(MAKE) -f CMakeFiles/ass1.dir/build.make CMakeFiles/ass1.dir/PwdCommand.cpp.o.provides.build
.PHONY : CMakeFiles/ass1.dir/PwdCommand.cpp.o.provides

CMakeFiles/ass1.dir/PwdCommand.cpp.o.provides.build: CMakeFiles/ass1.dir/PwdCommand.cpp.o


CMakeFiles/ass1.dir/CdCommand.cpp.o: CMakeFiles/ass1.dir/flags.make
CMakeFiles/ass1.dir/CdCommand.cpp.o: ../CdCommand.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ofirbed/Desktop/Ass1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/ass1.dir/CdCommand.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ass1.dir/CdCommand.cpp.o -c /home/ofirbed/Desktop/Ass1/CdCommand.cpp

CMakeFiles/ass1.dir/CdCommand.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ass1.dir/CdCommand.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ofirbed/Desktop/Ass1/CdCommand.cpp > CMakeFiles/ass1.dir/CdCommand.cpp.i

CMakeFiles/ass1.dir/CdCommand.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ass1.dir/CdCommand.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ofirbed/Desktop/Ass1/CdCommand.cpp -o CMakeFiles/ass1.dir/CdCommand.cpp.s

CMakeFiles/ass1.dir/CdCommand.cpp.o.requires:

.PHONY : CMakeFiles/ass1.dir/CdCommand.cpp.o.requires

CMakeFiles/ass1.dir/CdCommand.cpp.o.provides: CMakeFiles/ass1.dir/CdCommand.cpp.o.requires
	$(MAKE) -f CMakeFiles/ass1.dir/build.make CMakeFiles/ass1.dir/CdCommand.cpp.o.provides.build
.PHONY : CMakeFiles/ass1.dir/CdCommand.cpp.o.provides

CMakeFiles/ass1.dir/CdCommand.cpp.o.provides.build: CMakeFiles/ass1.dir/CdCommand.cpp.o


CMakeFiles/ass1.dir/Main.cpp.o: CMakeFiles/ass1.dir/flags.make
CMakeFiles/ass1.dir/Main.cpp.o: ../Main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ofirbed/Desktop/Ass1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/ass1.dir/Main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ass1.dir/Main.cpp.o -c /home/ofirbed/Desktop/Ass1/Main.cpp

CMakeFiles/ass1.dir/Main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ass1.dir/Main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ofirbed/Desktop/Ass1/Main.cpp > CMakeFiles/ass1.dir/Main.cpp.i

CMakeFiles/ass1.dir/Main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ass1.dir/Main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ofirbed/Desktop/Ass1/Main.cpp -o CMakeFiles/ass1.dir/Main.cpp.s

CMakeFiles/ass1.dir/Main.cpp.o.requires:

.PHONY : CMakeFiles/ass1.dir/Main.cpp.o.requires

CMakeFiles/ass1.dir/Main.cpp.o.provides: CMakeFiles/ass1.dir/Main.cpp.o.requires
	$(MAKE) -f CMakeFiles/ass1.dir/build.make CMakeFiles/ass1.dir/Main.cpp.o.provides.build
.PHONY : CMakeFiles/ass1.dir/Main.cpp.o.provides

CMakeFiles/ass1.dir/Main.cpp.o.provides.build: CMakeFiles/ass1.dir/Main.cpp.o


CMakeFiles/ass1.dir/MkdirCommand.cpp.o: CMakeFiles/ass1.dir/flags.make
CMakeFiles/ass1.dir/MkdirCommand.cpp.o: ../MkdirCommand.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ofirbed/Desktop/Ass1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/ass1.dir/MkdirCommand.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ass1.dir/MkdirCommand.cpp.o -c /home/ofirbed/Desktop/Ass1/MkdirCommand.cpp

CMakeFiles/ass1.dir/MkdirCommand.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ass1.dir/MkdirCommand.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ofirbed/Desktop/Ass1/MkdirCommand.cpp > CMakeFiles/ass1.dir/MkdirCommand.cpp.i

CMakeFiles/ass1.dir/MkdirCommand.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ass1.dir/MkdirCommand.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ofirbed/Desktop/Ass1/MkdirCommand.cpp -o CMakeFiles/ass1.dir/MkdirCommand.cpp.s

CMakeFiles/ass1.dir/MkdirCommand.cpp.o.requires:

.PHONY : CMakeFiles/ass1.dir/MkdirCommand.cpp.o.requires

CMakeFiles/ass1.dir/MkdirCommand.cpp.o.provides: CMakeFiles/ass1.dir/MkdirCommand.cpp.o.requires
	$(MAKE) -f CMakeFiles/ass1.dir/build.make CMakeFiles/ass1.dir/MkdirCommand.cpp.o.provides.build
.PHONY : CMakeFiles/ass1.dir/MkdirCommand.cpp.o.provides

CMakeFiles/ass1.dir/MkdirCommand.cpp.o.provides.build: CMakeFiles/ass1.dir/MkdirCommand.cpp.o


# Object files for target ass1
ass1_OBJECTS = \
"CMakeFiles/ass1.dir/main.cpp.o" \
"CMakeFiles/ass1.dir/BaseFile.cpp.o" \
"CMakeFiles/ass1.dir/File.cpp.o" \
"CMakeFiles/ass1.dir/Directory.cpp.o" \
"CMakeFiles/ass1.dir/Environment.cpp.o" \
"CMakeFiles/ass1.dir/LsCommand.cpp.o" \
"CMakeFiles/ass1.dir/BaseCommand.cpp.o" \
"CMakeFiles/ass1.dir/FileSystem.cpp.o" \
"CMakeFiles/ass1.dir/PwdCommand.cpp.o" \
"CMakeFiles/ass1.dir/CdCommand.cpp.o" \
"CMakeFiles/ass1.dir/Main.cpp.o" \
"CMakeFiles/ass1.dir/MkdirCommand.cpp.o"

# External object files for target ass1
ass1_EXTERNAL_OBJECTS =

ass1: CMakeFiles/ass1.dir/main.cpp.o
ass1: CMakeFiles/ass1.dir/BaseFile.cpp.o
ass1: CMakeFiles/ass1.dir/File.cpp.o
ass1: CMakeFiles/ass1.dir/Directory.cpp.o
ass1: CMakeFiles/ass1.dir/Environment.cpp.o
ass1: CMakeFiles/ass1.dir/LsCommand.cpp.o
ass1: CMakeFiles/ass1.dir/BaseCommand.cpp.o
ass1: CMakeFiles/ass1.dir/FileSystem.cpp.o
ass1: CMakeFiles/ass1.dir/PwdCommand.cpp.o
ass1: CMakeFiles/ass1.dir/CdCommand.cpp.o
ass1: CMakeFiles/ass1.dir/Main.cpp.o
ass1: CMakeFiles/ass1.dir/MkdirCommand.cpp.o
ass1: CMakeFiles/ass1.dir/build.make
ass1: CMakeFiles/ass1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ofirbed/Desktop/Ass1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Linking CXX executable ass1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ass1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ass1.dir/build: ass1

.PHONY : CMakeFiles/ass1.dir/build

CMakeFiles/ass1.dir/requires: CMakeFiles/ass1.dir/main.cpp.o.requires
CMakeFiles/ass1.dir/requires: CMakeFiles/ass1.dir/BaseFile.cpp.o.requires
CMakeFiles/ass1.dir/requires: CMakeFiles/ass1.dir/File.cpp.o.requires
CMakeFiles/ass1.dir/requires: CMakeFiles/ass1.dir/Directory.cpp.o.requires
CMakeFiles/ass1.dir/requires: CMakeFiles/ass1.dir/Environment.cpp.o.requires
CMakeFiles/ass1.dir/requires: CMakeFiles/ass1.dir/LsCommand.cpp.o.requires
CMakeFiles/ass1.dir/requires: CMakeFiles/ass1.dir/BaseCommand.cpp.o.requires
CMakeFiles/ass1.dir/requires: CMakeFiles/ass1.dir/FileSystem.cpp.o.requires
CMakeFiles/ass1.dir/requires: CMakeFiles/ass1.dir/PwdCommand.cpp.o.requires
CMakeFiles/ass1.dir/requires: CMakeFiles/ass1.dir/CdCommand.cpp.o.requires
CMakeFiles/ass1.dir/requires: CMakeFiles/ass1.dir/Main.cpp.o.requires
CMakeFiles/ass1.dir/requires: CMakeFiles/ass1.dir/MkdirCommand.cpp.o.requires

.PHONY : CMakeFiles/ass1.dir/requires

CMakeFiles/ass1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ass1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ass1.dir/clean

CMakeFiles/ass1.dir/depend:
	cd /home/ofirbed/Desktop/Ass1/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ofirbed/Desktop/Ass1 /home/ofirbed/Desktop/Ass1 /home/ofirbed/Desktop/Ass1/cmake-build-debug /home/ofirbed/Desktop/Ass1/cmake-build-debug /home/ofirbed/Desktop/Ass1/cmake-build-debug/CMakeFiles/ass1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ass1.dir/depend

