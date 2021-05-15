cmake_minimum_required(VERSION 3.16)
project(advance)

set(CMAKE_CXX_STANDARD 20)

file(GLOB_RECURSE POINTER_SOURCES RELATIVE ${CMAKE_SOURCE_DIR} "pointer/*.cpp")
add_executable(pointer ${POINTER_SOURCES})

file(GLOB_RECURSE ARRAY_SOURCES RELATIVE ${CMAKE_SOURCE_DIR} "array/*.cpp")
add_executable(array ${ARRAY_SOURCES})

file(GLOB_RECURSE BIT_MANIPULATION_SOURCES RELATIVE ${CMAKE_SOURCE_DIR} "bit-manipulation/*.cpp")
add_executable(bit-manipulation ${BIT_MANIPULATION_SOURCES})

file(GLOB_RECURSE STRUCT_SOURCES RELATIVE ${CMAKE_SOURCE_DIR} "struct/*.cpp")
add_executable(struct ${STRUCT_SOURCES})