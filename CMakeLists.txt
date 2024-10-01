cmake_minimum_required(VERSION 3.14)
project(PR5_3)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(lib/googletest)

add_executable(PR5_3
        src/main.cpp
        src/h.cpp
)

add_executable(PR5_3_tests
        tests/test_h.cpp
        src/h.cpp
)

target_link_libraries(PR5_3_tests gtest gtest_main)

enable_testing()
include(GoogleTest)
gtest_discover_tests(PR5_3_tests)