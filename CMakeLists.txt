# Sorting - (c) 2026 Example Org - MIT License
# Author: Engineering Team <engineering@example.com>
cmake_minimum_required(VERSION 3.27)
project(c_example_sorting
        VERSION 1.0.0
        DESCRIPTION "Reference implementation of sorting algorithms with complexity analysis."
        HOMEPAGE_URL "https://git.example.com/c-example-sorting"
        LANGUAGES C)

set(CMAKE_C_STANDARD 17)
include_directories(include)

file(GLOB SOURCES src/*.c)
add_executable(app ${SOURCES})

enable_testing()
add_test(NAME unit COMMAND app)
