
aux_source_directory(. DIR_LIB_SRCS)

add_library(MathFunctions ${DIR_LIB_SRCS})


#indicate which path that MathFunctions lib would be installed

#install(TARGETS MathFunctions DESTINATION bin)
#install(FILES MathFunctions.h DESTINATION include)