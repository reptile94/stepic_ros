# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/andrey/stepik-ros/workspace/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/andrey/stepik-ros/workspace/build

# Include any dependencies generated for this target.
include client_server/CMakeFiles/server.dir/depend.make

# Include the progress variables for this target.
include client_server/CMakeFiles/server.dir/progress.make

# Include the compile flags for this target's objects.
include client_server/CMakeFiles/server.dir/flags.make

client_server/CMakeFiles/server.dir/src/subscriber.cpp.o: client_server/CMakeFiles/server.dir/flags.make
client_server/CMakeFiles/server.dir/src/subscriber.cpp.o: /home/andrey/stepik-ros/workspace/src/client_server/src/subscriber.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/andrey/stepik-ros/workspace/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object client_server/CMakeFiles/server.dir/src/subscriber.cpp.o"
	cd /home/andrey/stepik-ros/workspace/build/client_server && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/server.dir/src/subscriber.cpp.o -c /home/andrey/stepik-ros/workspace/src/client_server/src/subscriber.cpp

client_server/CMakeFiles/server.dir/src/subscriber.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server.dir/src/subscriber.cpp.i"
	cd /home/andrey/stepik-ros/workspace/build/client_server && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/andrey/stepik-ros/workspace/src/client_server/src/subscriber.cpp > CMakeFiles/server.dir/src/subscriber.cpp.i

client_server/CMakeFiles/server.dir/src/subscriber.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server.dir/src/subscriber.cpp.s"
	cd /home/andrey/stepik-ros/workspace/build/client_server && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/andrey/stepik-ros/workspace/src/client_server/src/subscriber.cpp -o CMakeFiles/server.dir/src/subscriber.cpp.s

client_server/CMakeFiles/server.dir/src/subscriber.cpp.o.requires:

.PHONY : client_server/CMakeFiles/server.dir/src/subscriber.cpp.o.requires

client_server/CMakeFiles/server.dir/src/subscriber.cpp.o.provides: client_server/CMakeFiles/server.dir/src/subscriber.cpp.o.requires
	$(MAKE) -f client_server/CMakeFiles/server.dir/build.make client_server/CMakeFiles/server.dir/src/subscriber.cpp.o.provides.build
.PHONY : client_server/CMakeFiles/server.dir/src/subscriber.cpp.o.provides

client_server/CMakeFiles/server.dir/src/subscriber.cpp.o.provides.build: client_server/CMakeFiles/server.dir/src/subscriber.cpp.o


# Object files for target server
server_OBJECTS = \
"CMakeFiles/server.dir/src/subscriber.cpp.o"

# External object files for target server
server_EXTERNAL_OBJECTS =

/home/andrey/stepik-ros/workspace/devel/lib/client_server/server: client_server/CMakeFiles/server.dir/src/subscriber.cpp.o
/home/andrey/stepik-ros/workspace/devel/lib/client_server/server: client_server/CMakeFiles/server.dir/build.make
/home/andrey/stepik-ros/workspace/devel/lib/client_server/server: /opt/ros/kinetic/lib/libroscpp.so
/home/andrey/stepik-ros/workspace/devel/lib/client_server/server: /usr/lib/x86_64-linux-gnu/libboost_signals.so
/home/andrey/stepik-ros/workspace/devel/lib/client_server/server: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
/home/andrey/stepik-ros/workspace/devel/lib/client_server/server: /opt/ros/kinetic/lib/librosconsole.so
/home/andrey/stepik-ros/workspace/devel/lib/client_server/server: /opt/ros/kinetic/lib/librosconsole_log4cxx.so
/home/andrey/stepik-ros/workspace/devel/lib/client_server/server: /opt/ros/kinetic/lib/librosconsole_backend_interface.so
/home/andrey/stepik-ros/workspace/devel/lib/client_server/server: /usr/lib/x86_64-linux-gnu/liblog4cxx.so
/home/andrey/stepik-ros/workspace/devel/lib/client_server/server: /usr/lib/x86_64-linux-gnu/libboost_regex.so
/home/andrey/stepik-ros/workspace/devel/lib/client_server/server: /opt/ros/kinetic/lib/libroscpp_serialization.so
/home/andrey/stepik-ros/workspace/devel/lib/client_server/server: /opt/ros/kinetic/lib/librostime.so
/home/andrey/stepik-ros/workspace/devel/lib/client_server/server: /opt/ros/kinetic/lib/libxmlrpcpp.so
/home/andrey/stepik-ros/workspace/devel/lib/client_server/server: /opt/ros/kinetic/lib/libcpp_common.so
/home/andrey/stepik-ros/workspace/devel/lib/client_server/server: /usr/lib/x86_64-linux-gnu/libboost_system.so
/home/andrey/stepik-ros/workspace/devel/lib/client_server/server: /usr/lib/x86_64-linux-gnu/libboost_thread.so
/home/andrey/stepik-ros/workspace/devel/lib/client_server/server: /usr/lib/x86_64-linux-gnu/libboost_chrono.so
/home/andrey/stepik-ros/workspace/devel/lib/client_server/server: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
/home/andrey/stepik-ros/workspace/devel/lib/client_server/server: /usr/lib/x86_64-linux-gnu/libboost_atomic.so
/home/andrey/stepik-ros/workspace/devel/lib/client_server/server: /usr/lib/x86_64-linux-gnu/libpthread.so
/home/andrey/stepik-ros/workspace/devel/lib/client_server/server: /usr/lib/x86_64-linux-gnu/libconsole_bridge.so
/home/andrey/stepik-ros/workspace/devel/lib/client_server/server: client_server/CMakeFiles/server.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/andrey/stepik-ros/workspace/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable /home/andrey/stepik-ros/workspace/devel/lib/client_server/server"
	cd /home/andrey/stepik-ros/workspace/build/client_server && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/server.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
client_server/CMakeFiles/server.dir/build: /home/andrey/stepik-ros/workspace/devel/lib/client_server/server

.PHONY : client_server/CMakeFiles/server.dir/build

client_server/CMakeFiles/server.dir/requires: client_server/CMakeFiles/server.dir/src/subscriber.cpp.o.requires

.PHONY : client_server/CMakeFiles/server.dir/requires

client_server/CMakeFiles/server.dir/clean:
	cd /home/andrey/stepik-ros/workspace/build/client_server && $(CMAKE_COMMAND) -P CMakeFiles/server.dir/cmake_clean.cmake
.PHONY : client_server/CMakeFiles/server.dir/clean

client_server/CMakeFiles/server.dir/depend:
	cd /home/andrey/stepik-ros/workspace/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/andrey/stepik-ros/workspace/src /home/andrey/stepik-ros/workspace/src/client_server /home/andrey/stepik-ros/workspace/build /home/andrey/stepik-ros/workspace/build/client_server /home/andrey/stepik-ros/workspace/build/client_server/CMakeFiles/server.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : client_server/CMakeFiles/server.dir/depend

