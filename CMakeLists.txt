#Building project file
cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 11)
project(File)

add_executable(File start.cpp source/File.cpp)
target_include_directories(File PUBLIC "interface")