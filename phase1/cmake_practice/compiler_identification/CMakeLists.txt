cmake_minimum_required(VERSION 3.18...3.25)
project(identifyCompiler)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(identify_compiler 
	src/identify_compiler.cpp
)

target_include_directories(identify_compiler PUBLIC include)
