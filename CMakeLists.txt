cmake_minimum_required(VERSION 3.25)
project(data_structures_and_algorithms)

set(CMAKE_CXX_STANDARD 17)

include_directories(data_structures)


add_library(stack_lib SHARED
        data_structures/Stack/ArrayBasedStack.cpp)

add_executable(stack_test data_structures/Stack/StackTest.cpp)

target_link_libraries(stack_test stack_lib)