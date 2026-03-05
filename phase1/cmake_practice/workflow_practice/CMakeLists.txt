cmake_minimum_required(VERSION 3.18...3.25)
project(workFlowPractice)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(workflow_practice 
	src/main.cpp
)

target_include_directories(workflow_practice PUBLIC include)
