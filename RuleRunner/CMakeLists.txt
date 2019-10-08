cmake_minimum_required(VERSION 3.14)
project(RuleRunner)

set(CMAKE_CXX_STANDARD 14)
include_directories(include)
add_executable(RuleRunner src/main.cpp src/RuleTester.cpp src/RuleA.cpp src/RuleB.cpp src/RuleC.cpp)