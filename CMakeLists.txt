cmake_minimum_required(VERSION 3.25)
project (
ci-test
VERSION 0.1.0
DESCRIPTION "Baseline boilerplate for a deployment pipeline"
LANGUAGES C CXX
)

set(CMAKE_CXX_STANDARD 17)

add_executable(${PROJECT_NAME} main.cpp addNumbers.cpp)