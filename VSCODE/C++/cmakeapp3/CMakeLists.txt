cmake_minimum_required(VERSION 2.8)

project(Demo3)

aux_source_directory(. DIR_SRCS)

add_subdirectory(math)

add_executable(Demo ${DIR_SRCS})

target_link_libraries(Demo MathFunctions)