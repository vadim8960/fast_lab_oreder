# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /home/vadim/my_bin/clion-2020.2.4/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/vadim/my_bin/clion-2020.2.4/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/vadim/programs/c_lang/fast_lab_oreder/task1_19

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/vadim/programs/c_lang/fast_lab_oreder/task1_19/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/task1_19.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/task1_19.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/task1_19.dir/flags.make

CMakeFiles/task1_19.dir/main.cpp.o: CMakeFiles/task1_19.dir/flags.make
CMakeFiles/task1_19.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vadim/programs/c_lang/fast_lab_oreder/task1_19/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/task1_19.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/task1_19.dir/main.cpp.o -c /home/vadim/programs/c_lang/fast_lab_oreder/task1_19/main.cpp

CMakeFiles/task1_19.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/task1_19.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/vadim/programs/c_lang/fast_lab_oreder/task1_19/main.cpp > CMakeFiles/task1_19.dir/main.cpp.i

CMakeFiles/task1_19.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/task1_19.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/vadim/programs/c_lang/fast_lab_oreder/task1_19/main.cpp -o CMakeFiles/task1_19.dir/main.cpp.s

# Object files for target task1_19
task1_19_OBJECTS = \
"CMakeFiles/task1_19.dir/main.cpp.o"

# External object files for target task1_19
task1_19_EXTERNAL_OBJECTS =

task1_19: CMakeFiles/task1_19.dir/main.cpp.o
task1_19: CMakeFiles/task1_19.dir/build.make
task1_19: CMakeFiles/task1_19.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/vadim/programs/c_lang/fast_lab_oreder/task1_19/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable task1_19"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/task1_19.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/task1_19.dir/build: task1_19

.PHONY : CMakeFiles/task1_19.dir/build

CMakeFiles/task1_19.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/task1_19.dir/cmake_clean.cmake
.PHONY : CMakeFiles/task1_19.dir/clean

CMakeFiles/task1_19.dir/depend:
	cd /home/vadim/programs/c_lang/fast_lab_oreder/task1_19/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/vadim/programs/c_lang/fast_lab_oreder/task1_19 /home/vadim/programs/c_lang/fast_lab_oreder/task1_19 /home/vadim/programs/c_lang/fast_lab_oreder/task1_19/cmake-build-debug /home/vadim/programs/c_lang/fast_lab_oreder/task1_19/cmake-build-debug /home/vadim/programs/c_lang/fast_lab_oreder/task1_19/cmake-build-debug/CMakeFiles/task1_19.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/task1_19.dir/depend

