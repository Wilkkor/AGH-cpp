cmake_minimum_required(VERSION 3.6)
project(juwenalia)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp plecak.cpp plecak.h prowiant.cpp prowiant.h)
add_executable(juwenalia ${SOURCE_FILES} plecak.cpp plecak.h prowiant.cpp prowiant.h)