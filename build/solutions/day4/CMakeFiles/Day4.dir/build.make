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
include solutions/day4/CMakeFiles/Day4.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include solutions/day4/CMakeFiles/Day4.dir/compiler_depend.make

# Include the progress variables for this target.
include solutions/day4/CMakeFiles/Day4.dir/progress.make

# Include the compile flags for this target's objects.
include solutions/day4/CMakeFiles/Day4.dir/flags.make

solutions/day4/CMakeFiles/Day4.dir/day4.cc.o: solutions/day4/CMakeFiles/Day4.dir/flags.make
solutions/day4/CMakeFiles/Day4.dir/day4.cc.o: /Users/martinzhang/Documents/workspace/c++/adventofcode/src/solutions/day4/day4.cc
solutions/day4/CMakeFiles/Day4.dir/day4.cc.o: solutions/day4/CMakeFiles/Day4.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/martinzhang/Documents/workspace/c++/adventofcode/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object solutions/day4/CMakeFiles/Day4.dir/day4.cc.o"
	cd /Users/martinzhang/Documents/workspace/c++/adventofcode/build/solutions/day4 && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT solutions/day4/CMakeFiles/Day4.dir/day4.cc.o -MF CMakeFiles/Day4.dir/day4.cc.o.d -o CMakeFiles/Day4.dir/day4.cc.o -c /Users/martinzhang/Documents/workspace/c++/adventofcode/src/solutions/day4/day4.cc

solutions/day4/CMakeFiles/Day4.dir/day4.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Day4.dir/day4.cc.i"
	cd /Users/martinzhang/Documents/workspace/c++/adventofcode/build/solutions/day4 && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/martinzhang/Documents/workspace/c++/adventofcode/src/solutions/day4/day4.cc > CMakeFiles/Day4.dir/day4.cc.i

solutions/day4/CMakeFiles/Day4.dir/day4.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Day4.dir/day4.cc.s"
	cd /Users/martinzhang/Documents/workspace/c++/adventofcode/build/solutions/day4 && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/martinzhang/Documents/workspace/c++/adventofcode/src/solutions/day4/day4.cc -o CMakeFiles/Day4.dir/day4.cc.s

# Object files for target Day4
Day4_OBJECTS = \
"CMakeFiles/Day4.dir/day4.cc.o"

# External object files for target Day4
Day4_EXTERNAL_OBJECTS =

solutions/day4/libDay4.a: solutions/day4/CMakeFiles/Day4.dir/day4.cc.o
solutions/day4/libDay4.a: solutions/day4/CMakeFiles/Day4.dir/build.make
solutions/day4/libDay4.a: solutions/day4/CMakeFiles/Day4.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/martinzhang/Documents/workspace/c++/adventofcode/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libDay4.a"
	cd /Users/martinzhang/Documents/workspace/c++/adventofcode/build/solutions/day4 && $(CMAKE_COMMAND) -P CMakeFiles/Day4.dir/cmake_clean_target.cmake
	cd /Users/martinzhang/Documents/workspace/c++/adventofcode/build/solutions/day4 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Day4.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
solutions/day4/CMakeFiles/Day4.dir/build: solutions/day4/libDay4.a
.PHONY : solutions/day4/CMakeFiles/Day4.dir/build

solutions/day4/CMakeFiles/Day4.dir/clean:
	cd /Users/martinzhang/Documents/workspace/c++/adventofcode/build/solutions/day4 && $(CMAKE_COMMAND) -P CMakeFiles/Day4.dir/cmake_clean.cmake
.PHONY : solutions/day4/CMakeFiles/Day4.dir/clean

solutions/day4/CMakeFiles/Day4.dir/depend:
	cd /Users/martinzhang/Documents/workspace/c++/adventofcode/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/martinzhang/Documents/workspace/c++/adventofcode/src /Users/martinzhang/Documents/workspace/c++/adventofcode/src/solutions/day4 /Users/martinzhang/Documents/workspace/c++/adventofcode/build /Users/martinzhang/Documents/workspace/c++/adventofcode/build/solutions/day4 /Users/martinzhang/Documents/workspace/c++/adventofcode/build/solutions/day4/CMakeFiles/Day4.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : solutions/day4/CMakeFiles/Day4.dir/depend

