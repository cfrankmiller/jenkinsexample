cmake_minimum_required(VERSION 3.10)
project(jenkinsexample)

set(CMAKE_CXX_STANDARD 11)

add_executable(jenkinsexample main.cpp helloWorld.cpp helloWorld.h)

#include(CTest)
#add_subdirectory(test)

