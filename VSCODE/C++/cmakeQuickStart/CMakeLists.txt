cmake_minimum_required(VERSION 3.0.0)
project(helloworldnew VERSION 0.1.0)

include(CTest)
enable_testing()


set(CMAKE_CXX_COMPILER "clang++")
set(CMAKE_CXX_FLAGS "-g -Wall -static-libgcc --target=x86_64-w64-mingw -std=c++14)

add_executable(helloworldnew main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
