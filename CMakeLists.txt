cmake_minimum_required(VERSION 3.22)
project(EDA_CMasMas)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(Stack)

add_executable(EDA_CMasMas
        Stack/node.h)
