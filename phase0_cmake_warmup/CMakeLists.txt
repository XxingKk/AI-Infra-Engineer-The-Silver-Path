cmake_minimum_required(VERSION 3.10)
project(HelloInfra)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(hello_infra 
	src/main.cpp
	src/infra_utils.cpp
)

target_include_directories(hello_infra PUBLIC include)
