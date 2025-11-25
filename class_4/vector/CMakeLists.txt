cmake_minimum_required(VERSION 3.14)

project(class_4)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# set global variables
set(CMAKE_CXX_FLAGS "-Wall -Wextra -Wconversion -fPIC -std=gnu++11")
set(CGAL_DO_NOT_WARN_ABOUT_CMAKE_BUILD_TYPE TRUE)

include_directories(include)

set(SOURCES src/vector.cpp src/main.cpp)
add_executable(${PROJECT_NAME})
set_target_properties(${PROJECT_NAME} PROPERTIES OUTPUT_NAME "out")
target_sources(${PROJECT_NAME} PRIVATE ${SOURCES})
