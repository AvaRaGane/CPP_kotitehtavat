cmake_minimum_required(VERSION 3.5)

project(cpp_1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(cpp_1 main.cpp)

install(TARGETS cpp_1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
