# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.14.4/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.14.4/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/cchoe/Documents/c/sdl

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/cchoe/Documents/c/sdl/build

# Include any dependencies generated for this target.
include Lesson1/CMakeFiles/Lesson1.dir/depend.make

# Include the progress variables for this target.
include Lesson1/CMakeFiles/Lesson1.dir/progress.make

# Include the compile flags for this target's objects.
include Lesson1/CMakeFiles/Lesson1.dir/flags.make

Lesson1/CMakeFiles/Lesson1.dir/src/main.cpp.o: Lesson1/CMakeFiles/Lesson1.dir/flags.make
Lesson1/CMakeFiles/Lesson1.dir/src/main.cpp.o: ../Lesson1/src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/cchoe/Documents/c/sdl/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Lesson1/CMakeFiles/Lesson1.dir/src/main.cpp.o"
	cd /Users/cchoe/Documents/c/sdl/build/Lesson1 && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Lesson1.dir/src/main.cpp.o -c /Users/cchoe/Documents/c/sdl/Lesson1/src/main.cpp

Lesson1/CMakeFiles/Lesson1.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Lesson1.dir/src/main.cpp.i"
	cd /Users/cchoe/Documents/c/sdl/build/Lesson1 && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/cchoe/Documents/c/sdl/Lesson1/src/main.cpp > CMakeFiles/Lesson1.dir/src/main.cpp.i

Lesson1/CMakeFiles/Lesson1.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Lesson1.dir/src/main.cpp.s"
	cd /Users/cchoe/Documents/c/sdl/build/Lesson1 && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/cchoe/Documents/c/sdl/Lesson1/src/main.cpp -o CMakeFiles/Lesson1.dir/src/main.cpp.s

Lesson1/CMakeFiles/Lesson1.dir/src/lib/graph.cpp.o: Lesson1/CMakeFiles/Lesson1.dir/flags.make
Lesson1/CMakeFiles/Lesson1.dir/src/lib/graph.cpp.o: ../Lesson1/src/lib/graph.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/cchoe/Documents/c/sdl/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object Lesson1/CMakeFiles/Lesson1.dir/src/lib/graph.cpp.o"
	cd /Users/cchoe/Documents/c/sdl/build/Lesson1 && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Lesson1.dir/src/lib/graph.cpp.o -c /Users/cchoe/Documents/c/sdl/Lesson1/src/lib/graph.cpp

Lesson1/CMakeFiles/Lesson1.dir/src/lib/graph.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Lesson1.dir/src/lib/graph.cpp.i"
	cd /Users/cchoe/Documents/c/sdl/build/Lesson1 && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/cchoe/Documents/c/sdl/Lesson1/src/lib/graph.cpp > CMakeFiles/Lesson1.dir/src/lib/graph.cpp.i

Lesson1/CMakeFiles/Lesson1.dir/src/lib/graph.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Lesson1.dir/src/lib/graph.cpp.s"
	cd /Users/cchoe/Documents/c/sdl/build/Lesson1 && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/cchoe/Documents/c/sdl/Lesson1/src/lib/graph.cpp -o CMakeFiles/Lesson1.dir/src/lib/graph.cpp.s

Lesson1/CMakeFiles/Lesson1.dir/src/lib/point.cpp.o: Lesson1/CMakeFiles/Lesson1.dir/flags.make
Lesson1/CMakeFiles/Lesson1.dir/src/lib/point.cpp.o: ../Lesson1/src/lib/point.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/cchoe/Documents/c/sdl/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object Lesson1/CMakeFiles/Lesson1.dir/src/lib/point.cpp.o"
	cd /Users/cchoe/Documents/c/sdl/build/Lesson1 && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Lesson1.dir/src/lib/point.cpp.o -c /Users/cchoe/Documents/c/sdl/Lesson1/src/lib/point.cpp

Lesson1/CMakeFiles/Lesson1.dir/src/lib/point.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Lesson1.dir/src/lib/point.cpp.i"
	cd /Users/cchoe/Documents/c/sdl/build/Lesson1 && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/cchoe/Documents/c/sdl/Lesson1/src/lib/point.cpp > CMakeFiles/Lesson1.dir/src/lib/point.cpp.i

Lesson1/CMakeFiles/Lesson1.dir/src/lib/point.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Lesson1.dir/src/lib/point.cpp.s"
	cd /Users/cchoe/Documents/c/sdl/build/Lesson1 && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/cchoe/Documents/c/sdl/Lesson1/src/lib/point.cpp -o CMakeFiles/Lesson1.dir/src/lib/point.cpp.s

Lesson1/CMakeFiles/Lesson1.dir/src/lib/context.cpp.o: Lesson1/CMakeFiles/Lesson1.dir/flags.make
Lesson1/CMakeFiles/Lesson1.dir/src/lib/context.cpp.o: ../Lesson1/src/lib/context.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/cchoe/Documents/c/sdl/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object Lesson1/CMakeFiles/Lesson1.dir/src/lib/context.cpp.o"
	cd /Users/cchoe/Documents/c/sdl/build/Lesson1 && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Lesson1.dir/src/lib/context.cpp.o -c /Users/cchoe/Documents/c/sdl/Lesson1/src/lib/context.cpp

Lesson1/CMakeFiles/Lesson1.dir/src/lib/context.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Lesson1.dir/src/lib/context.cpp.i"
	cd /Users/cchoe/Documents/c/sdl/build/Lesson1 && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/cchoe/Documents/c/sdl/Lesson1/src/lib/context.cpp > CMakeFiles/Lesson1.dir/src/lib/context.cpp.i

Lesson1/CMakeFiles/Lesson1.dir/src/lib/context.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Lesson1.dir/src/lib/context.cpp.s"
	cd /Users/cchoe/Documents/c/sdl/build/Lesson1 && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/cchoe/Documents/c/sdl/Lesson1/src/lib/context.cpp -o CMakeFiles/Lesson1.dir/src/lib/context.cpp.s

Lesson1/CMakeFiles/Lesson1.dir/src/lib/application.cpp.o: Lesson1/CMakeFiles/Lesson1.dir/flags.make
Lesson1/CMakeFiles/Lesson1.dir/src/lib/application.cpp.o: ../Lesson1/src/lib/application.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/cchoe/Documents/c/sdl/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object Lesson1/CMakeFiles/Lesson1.dir/src/lib/application.cpp.o"
	cd /Users/cchoe/Documents/c/sdl/build/Lesson1 && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Lesson1.dir/src/lib/application.cpp.o -c /Users/cchoe/Documents/c/sdl/Lesson1/src/lib/application.cpp

Lesson1/CMakeFiles/Lesson1.dir/src/lib/application.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Lesson1.dir/src/lib/application.cpp.i"
	cd /Users/cchoe/Documents/c/sdl/build/Lesson1 && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/cchoe/Documents/c/sdl/Lesson1/src/lib/application.cpp > CMakeFiles/Lesson1.dir/src/lib/application.cpp.i

Lesson1/CMakeFiles/Lesson1.dir/src/lib/application.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Lesson1.dir/src/lib/application.cpp.s"
	cd /Users/cchoe/Documents/c/sdl/build/Lesson1 && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/cchoe/Documents/c/sdl/Lesson1/src/lib/application.cpp -o CMakeFiles/Lesson1.dir/src/lib/application.cpp.s

Lesson1/CMakeFiles/Lesson1.dir/src/lib/panel.cpp.o: Lesson1/CMakeFiles/Lesson1.dir/flags.make
Lesson1/CMakeFiles/Lesson1.dir/src/lib/panel.cpp.o: ../Lesson1/src/lib/panel.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/cchoe/Documents/c/sdl/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object Lesson1/CMakeFiles/Lesson1.dir/src/lib/panel.cpp.o"
	cd /Users/cchoe/Documents/c/sdl/build/Lesson1 && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Lesson1.dir/src/lib/panel.cpp.o -c /Users/cchoe/Documents/c/sdl/Lesson1/src/lib/panel.cpp

Lesson1/CMakeFiles/Lesson1.dir/src/lib/panel.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Lesson1.dir/src/lib/panel.cpp.i"
	cd /Users/cchoe/Documents/c/sdl/build/Lesson1 && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/cchoe/Documents/c/sdl/Lesson1/src/lib/panel.cpp > CMakeFiles/Lesson1.dir/src/lib/panel.cpp.i

Lesson1/CMakeFiles/Lesson1.dir/src/lib/panel.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Lesson1.dir/src/lib/panel.cpp.s"
	cd /Users/cchoe/Documents/c/sdl/build/Lesson1 && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/cchoe/Documents/c/sdl/Lesson1/src/lib/panel.cpp -o CMakeFiles/Lesson1.dir/src/lib/panel.cpp.s

# Object files for target Lesson1
Lesson1_OBJECTS = \
"CMakeFiles/Lesson1.dir/src/main.cpp.o" \
"CMakeFiles/Lesson1.dir/src/lib/graph.cpp.o" \
"CMakeFiles/Lesson1.dir/src/lib/point.cpp.o" \
"CMakeFiles/Lesson1.dir/src/lib/context.cpp.o" \
"CMakeFiles/Lesson1.dir/src/lib/application.cpp.o" \
"CMakeFiles/Lesson1.dir/src/lib/panel.cpp.o"

# External object files for target Lesson1
Lesson1_EXTERNAL_OBJECTS =

Lesson1/Lesson1: Lesson1/CMakeFiles/Lesson1.dir/src/main.cpp.o
Lesson1/Lesson1: Lesson1/CMakeFiles/Lesson1.dir/src/lib/graph.cpp.o
Lesson1/Lesson1: Lesson1/CMakeFiles/Lesson1.dir/src/lib/point.cpp.o
Lesson1/Lesson1: Lesson1/CMakeFiles/Lesson1.dir/src/lib/context.cpp.o
Lesson1/Lesson1: Lesson1/CMakeFiles/Lesson1.dir/src/lib/application.cpp.o
Lesson1/Lesson1: Lesson1/CMakeFiles/Lesson1.dir/src/lib/panel.cpp.o
Lesson1/Lesson1: Lesson1/CMakeFiles/Lesson1.dir/build.make
Lesson1/Lesson1: Lesson1/CMakeFiles/Lesson1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/cchoe/Documents/c/sdl/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable Lesson1"
	cd /Users/cchoe/Documents/c/sdl/build/Lesson1 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Lesson1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Lesson1/CMakeFiles/Lesson1.dir/build: Lesson1/Lesson1

.PHONY : Lesson1/CMakeFiles/Lesson1.dir/build

Lesson1/CMakeFiles/Lesson1.dir/clean:
	cd /Users/cchoe/Documents/c/sdl/build/Lesson1 && $(CMAKE_COMMAND) -P CMakeFiles/Lesson1.dir/cmake_clean.cmake
.PHONY : Lesson1/CMakeFiles/Lesson1.dir/clean

Lesson1/CMakeFiles/Lesson1.dir/depend:
	cd /Users/cchoe/Documents/c/sdl/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/cchoe/Documents/c/sdl /Users/cchoe/Documents/c/sdl/Lesson1 /Users/cchoe/Documents/c/sdl/build /Users/cchoe/Documents/c/sdl/build/Lesson1 /Users/cchoe/Documents/c/sdl/build/Lesson1/CMakeFiles/Lesson1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Lesson1/CMakeFiles/Lesson1.dir/depend

