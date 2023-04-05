cmake_minimum_required(VERSION 3.22.1)
project(teste VERSION 0.1 LANGUAGES CXX )

include_directories( include )

#Building Instructions for Bash/WSL:
#On the terminal type -> cmake .
#Then type -> make
#After that, to execute it, type -> ./elevator

add_executable( elevator
                src/Elevator_main.cpp )
#Honestly, building using g++ seems a lot simpler, but the teacher asked me to use Cmake so here you have it...

#05/04/2023 update, after using Windows to program, I now understand why to use Cmake... Thanks teach.