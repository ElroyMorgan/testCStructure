cmake_minimum_required(VERSION 4.1)
project(TestCStructure)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 包含目录
include_directories(include)

# 明确指定需要编译的源文件，排除会导致冲突的文件
set(MAIN_SOURCES 
    src/main.cpp
    src/LinkQueue.cpp
    src/SqList.cpp
    src/stack.cpp
    src/test.cpp
)

# 创建主可执行文件
add_executable(main ${MAIN_SOURCES})

# 创建独立的std::stack示例可执行文件
add_executable(stack_example src/stack_std_main.cpp)

# 如果只想编译特定的源文件组合，可以使用下面的命令
# add_executable(main src/main.cpp src/LinkQueue.cpp src/SqList.cpp src/stack.cpp src/test.cpp)