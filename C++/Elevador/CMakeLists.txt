cmake_minimum_required(VERSION 3.25.2)
project(teste VERSION 0.1 LANGUAGES CXX )

#include_directories( include )

#*Building Instructions:
#On the terminal type -> cmake .
#Then type -> make
#After that, to execute it, type -> ./elevator

add_executable( elevator
                Elevator_main.cpp
                Elevador.hpp )
#Honestly, building using g++ seems a lot simpler, but the teacher asked me to use Cmake so here you have it...