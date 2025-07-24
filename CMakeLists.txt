cmake_minimum_required(VERSION 3.20)
project(lang)

set(CMAKE_TOOLCHAIN_FILE ~/Documents/external/vcpkg/)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

file(GLOB SOURCES src/*.cpp)
add_executable(${PROJECT_NAME} ${SOURCES})

find_package(Qt6 REQUIRED COMPONENTS Widgets)
target_link_libraries(${PROJECT_NAME} PRIVATE Qt6::Widgets)