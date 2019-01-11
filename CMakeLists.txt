cmake_minimum_required(VERSION 3.6)
project(ave)

set(CMAKE_CXX_STANDARD 17)
include_directories(./include)

add_executable(application src/application.cpp src/application.h src/keys/keyManager.cpp src/keys/keyManager.hpp
        src/keys/listener/keyListener.cpp src/keys/listener/keyListener.hpp)
