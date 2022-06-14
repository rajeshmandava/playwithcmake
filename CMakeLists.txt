cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

project(recipe-01 LANGUAGES CXX)
#set(CMAKE_CXX_COMPILER C++17)

add_library(message STATIC src/Message.h src/Message.cpp)

add_executable(hello-world src/hello.cpp)

target_link_libraries(hello-world message)