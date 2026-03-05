# This file is AI-generated.

cmake_minimum_required(VERSION 3.18) # 保持与你 phase0 的版本一致
project(AI_Infra_Engineer_The_Silver_Path LANGUAGES CXX)

# 1. 统一设置全局 C++ 标准
# 这样子目录就不需要重复写这两行了
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 2. 依次挂载各个模块
# CMake 会自动去这些文件夹下寻找对应的子 CMakeLists.txt
add_subdirectory(leetcode_practice)
add_subdirectory(phase0_cmake_warmup)

# 对于 Phase 1，由于你目前只有一个子目录 cmake_practice
# 建议直接关联到那个具体的练习目录，或者等你在 phase1 根目录写好图纸后再改
add_subdirectory(phase1)

# 3. 打印一条欢迎信息，确认配置成功
message(STATUS ">>> AI Infra Engineer The Silver Path: All modules registered.")
