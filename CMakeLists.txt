cmake_minimum_required(VERSION 3.5)

project(texteditor LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(texteditor main.cpp editor.cpp editor.h)
