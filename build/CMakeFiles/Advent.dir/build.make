# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.22.1/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.22.1/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/martinzhang/Documents/workspace/c++/adventofcode/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/martinzhang/Documents/workspace/c++/adventofcode/build

# Include any dependencies generated for this target.
include CMakeFiles/Advent.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Advent.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Advent.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Advent.dir/flags.make

CMakeFiles/Advent.dir/main.cc.o: CMakeFiles/Advent.dir/flags.make
CMakeFiles/Advent.dir/main.cc.o: /Users/martinzhang/Documents/workspace/c++/adventofcode/src/main.cc
CMakeFiles/Advent.dir/main.cc.o: CMakeFiles/Advent.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/martinzhang/Documents/workspace/c++/adventofcode/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Advent.dir/main.cc.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Advent.dir/main.cc.o -MF CMakeFiles/Advent.dir/main.cc.o.d -o CMakeFiles/Advent.dir/main.cc.o -c /Users/martinzhang/Documents/workspace/c++/adventofcode/src/main.cc

CMakeFiles/Advent.dir/main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Advent.dir/main.cc.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/martinzhang/Documents/workspace/c++/adventofcode/src/main.cc > CMakeFiles/Advent.dir/main.cc.i

CMakeFiles/Advent.dir/main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Advent.dir/main.cc.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/martinzhang/Documents/workspace/c++/adventofcode/src/main.cc -o CMakeFiles/Advent.dir/main.cc.s

# Object files for target Advent
Advent_OBJECTS = \
"CMakeFiles/Advent.dir/main.cc.o"

# External object files for target Advent
Advent_EXTERNAL_OBJECTS =

Advent: CMakeFiles/Advent.dir/main.cc.o
Advent: CMakeFiles/Advent.dir/build.make
Advent: solutions/solution/libSolution.a
Advent: solutions/libSolutionFactory.a
Advent: solutions/solution/libSolution.a
Advent: solutions/day1/libDay1.a
Advent: solutions/day2/libDay2.a
Advent: solutions/day3/libDay3.a
Advent: solutions/day4/libDay4.a
Advent: solutions/day5/libDay5.a
Advent: solutions/day6/libDay6.a
Advent: solutions/day7/libDay7.a
Advent: solutions/day8/libDay8.a
Advent: solutions/day9/libDay9.a
Advent: solutions/utils/libUtils.a
Advent: CMakeFiles/Advent.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/martinzhang/Documents/workspace/c++/adventofcode/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Advent"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Advent.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Advent.dir/build: Advent
.PHONY : CMakeFiles/Advent.dir/build

CMakeFiles/Advent.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Advent.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Advent.dir/clean

CMakeFiles/Advent.dir/depend:
	cd /Users/martinzhang/Documents/workspace/c++/adventofcode/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/martinzhang/Documents/workspace/c++/adventofcode/src /Users/martinzhang/Documents/workspace/c++/adventofcode/src /Users/martinzhang/Documents/workspace/c++/adventofcode/build /Users/martinzhang/Documents/workspace/c++/adventofcode/build /Users/martinzhang/Documents/workspace/c++/adventofcode/build/CMakeFiles/Advent.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Advent.dir/depend

