# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/yuliyan/Documents/CprogramDemo02

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/yuliyan/Documents/CprogramDemo02/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/demo22.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/demo22.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/demo22.dir/flags.make

CMakeFiles/demo22.dir/demo05/demo05.c.o: CMakeFiles/demo22.dir/flags.make
CMakeFiles/demo22.dir/demo05/demo05.c.o: ../demo05/demo05.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/yuliyan/Documents/CprogramDemo02/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/demo22.dir/demo05/demo05.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/demo22.dir/demo05/demo05.c.o   -c /Users/yuliyan/Documents/CprogramDemo02/demo05/demo05.c

CMakeFiles/demo22.dir/demo05/demo05.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/demo22.dir/demo05/demo05.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/yuliyan/Documents/CprogramDemo02/demo05/demo05.c > CMakeFiles/demo22.dir/demo05/demo05.c.i

CMakeFiles/demo22.dir/demo05/demo05.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/demo22.dir/demo05/demo05.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/yuliyan/Documents/CprogramDemo02/demo05/demo05.c -o CMakeFiles/demo22.dir/demo05/demo05.c.s

# Object files for target demo22
demo22_OBJECTS = \
"CMakeFiles/demo22.dir/demo05/demo05.c.o"

# External object files for target demo22
demo22_EXTERNAL_OBJECTS =

demo22: CMakeFiles/demo22.dir/demo05/demo05.c.o
demo22: CMakeFiles/demo22.dir/build.make
demo22: CMakeFiles/demo22.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/yuliyan/Documents/CprogramDemo02/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable demo22"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/demo22.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/demo22.dir/build: demo22

.PHONY : CMakeFiles/demo22.dir/build

CMakeFiles/demo22.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/demo22.dir/cmake_clean.cmake
.PHONY : CMakeFiles/demo22.dir/clean

CMakeFiles/demo22.dir/depend:
	cd /Users/yuliyan/Documents/CprogramDemo02/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/yuliyan/Documents/CprogramDemo02 /Users/yuliyan/Documents/CprogramDemo02 /Users/yuliyan/Documents/CprogramDemo02/cmake-build-debug /Users/yuliyan/Documents/CprogramDemo02/cmake-build-debug /Users/yuliyan/Documents/CprogramDemo02/cmake-build-debug/CMakeFiles/demo22.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/demo22.dir/depend

