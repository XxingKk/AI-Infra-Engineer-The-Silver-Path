# This file is AI-generated

cmake_minimum_required(VERSION 3.18)
project(LeetCode_Practice LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB_RECURSE SOURCE_FILES "*.cpp")

foreach(file ${SOURCE_FILES})
    # 获取相对路径，例如 "array/0001_two_sum.cpp"
    file(RELATIVE_PATH rel_path ${CMAKE_CURRENT_SOURCE_DIR} ${file})
    
    # 将路径中的 "/" 替换为 "_"，去掉后缀，生成 "array_0001_two_sum"
    string(REPLACE "/" "_" target_name ${rel_path})
    string(REPLACE ".cpp" "" target_name ${target_name})
    
    add_executable(${target_name} ${file})
endforeach()

  