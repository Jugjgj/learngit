#the minimum version that Cmake requires
cmake_minimum_required(VERSION 2.8)

#The name of project
project(Demo4)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

#Whether to use your own MathFunctions lib.
option(USE_MYMATH 
            "Use provided math implementation" ON)    


#Add a configuration of .h file in order to manage these sources files
configure_file(
    "${PROJECT_SOURCE_DIR}/config.h.in"
    "${PROJECT_BINARY_DIR}/config.h"
) 

#Whether to add MathFunctions lib
if(USE_MYMATH)
    include_directories("${PROJECT_SOURCE_DIR}/math")
    add_subdirectory(math)
    set(EXTRA_LIBS ${EXTRA_LIBS} MathFunctions)
endif(USE_MYMATH)

#search for all of .cpp files in this directory
#and save all names of these files into the variable named "DIR_SRCS"
aux_source_directory(. DIR_SRCS)


#add_subdirectory(math)

add_executable(Demo ${DIR_SRCS})
#indicate that Demo.exe needs to connect the library named MathFunctions
target_link_libraries(Demo ${EXTRA_LIBS})  


#indicate which path to install.
#install(TARGETS Demo Destination bin)
#install(FILES "${PROJECT_BINARY_DIR}/config.h"
#        DESTINATION include)