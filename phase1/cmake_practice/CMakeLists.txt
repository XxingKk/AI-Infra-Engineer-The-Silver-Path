# This file is AI-generated.

# cmake_practice 练习汇总配置
cmake_minimum_required(VERSION 3.18)
project(CMake__Practice)

# 打印日志，确认进入了 cmake 专项练习区
message(STATUS ">>> Sub-module: cmake_practice is active.")

# 1. 关联编译器识别实验
# 确保 compiler_identification 文件夹内也有它自己的 CMakeLists.txt
add_subdirectory(compiler_identification)

# 2. 关联工作流自动化实验
add_subdirectory(workflow_practice)

# 3. 预留：未来新的 CMake 专题练习
# add_subdirectory(library_linking_practice)