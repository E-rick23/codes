cmake_minimum_required(VERSION 3.22.1)
project(teste VERSION 0.1 LANGUAGES CXX )

include_directories( include )

#Building Instructions for Bash/WSL:
#On the terminal type -> cmake .
#Then type -> make
#After that, to execute it, type -> ./livros

add_executable( livros
                src/livros_main.cpp )
