cmake_minimum_required(VERSION 2.8)
project(HelloLib CXX)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_library(hello hello.cpp)
