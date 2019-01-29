cmake_minimum_required(VERSION 3.6)
project(ave)

set(CMAKE_CXX_STANDARD 17)
include_directories(./include)

file(GLOB_RECURSE SOURCES "src/*.cpp")
add_executable(application ${SOURCES})