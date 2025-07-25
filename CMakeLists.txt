cmake_minimum_required(VERSION 3.20)
project(lang)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

file(GLOB SOURCES src/*.cpp lib/*.cpp)
add_executable(${PROJECT_NAME} ${SOURCES})