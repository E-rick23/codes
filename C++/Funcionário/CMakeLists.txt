cmake_minimum_required(VERSION 3.22.1)
project(teste VERSION 0.1 LANGUAGES CXX )

#Building Instructions:
#On the terminal type -> cmake .
#Then type -> make
#After that, to execute it, type -> ./elevator

add_executable( funcionario
                Funcionario_main.cpp
                Funcionario.hpp )
