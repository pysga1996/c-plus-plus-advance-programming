cmake_minimum_required(VERSION 3.16)
project(advanced)

set(CMAKE_CXX_STANDARD 20)

file(GLOB_RECURSE POINTER_SOURCES RELATIVE ${CMAKE_SOURCE_DIR} "pointer/*.cpp")
add_executable(pointer ${POINTER_SOURCES})

file(GLOB_RECURSE ARRAY_SOURCES RELATIVE ${CMAKE_SOURCE_DIR} "array/*.cpp")
add_executable(array ${ARRAY_SOURCES})

file(GLOB_RECURSE BIT_MANIPULATION_SOURCES RELATIVE ${CMAKE_SOURCE_DIR} "bit-manipulation/*.cpp")
add_executable(bit-manipulation ${BIT_MANIPULATION_SOURCES})

file(GLOB_RECURSE STRUCT_SOURCES RELATIVE ${CMAKE_SOURCE_DIR} "struct/*.cpp")
add_executable(struct ${STRUCT_SOURCES})

file(GLOB_RECURSE TEMPLATE_SOURCES RELATIVE ${CMAKE_SOURCE_DIR} "template/*.cpp")
add_executable(template ${TEMPLATE_SOURCES})

file(GLOB_RECURSE LAMBDA_SOURCES RELATIVE ${CMAKE_SOURCE_DIR} "lambda/*.cpp")
add_executable(lambda ${LAMBDA_SOURCES})