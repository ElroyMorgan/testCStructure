cmake_minimum_required(VERSION 3.28.3)
project(CStructure)

set(CMAKE_CXX_STANDARD 23)

# 自动查找所有 cpp 文件
file(GLOB SOURCES "src/*.cpp")

# 将编译后的程序放在bin目录
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

# 添加include目录
include_directories(include)

add_executable(CStructure ${SOURCES})