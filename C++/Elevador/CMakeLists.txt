cmake_minimum_required(VERSION 3.25.2)
project(teste VERSION 0.1 LANGUAGES CXX )

#include_directories( include )

#To build type -> cmake .
#Then -> make
#After that -> ./elevator

add_executable( elevator
                Elevator_main.cpp
                Elevador.hpp )
