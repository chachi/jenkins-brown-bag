project(JenkinsBrownBag)
cmake_minimum_required(VERSION 2.8)

enable_testing()

add_subdirectory(gtest)

include(def_test.cmake)
include_directories(gtest/include)
def_test(TestMultiply SOURCES TestMultiply.cpp)
