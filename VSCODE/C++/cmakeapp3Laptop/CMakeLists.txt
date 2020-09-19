cmake_minimum_required(VERSION 2.8)

project(Demo3_2)

aux_source_directory(. DIR_SRCS)

add_subdirectory(math)

add_executable(Demo ${DIR_SRCS})

#indicate that Demo.exe needs to connect the library named MathFunctions
target_link_libraries(Demo MathFunctions)  
