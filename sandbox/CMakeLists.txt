cmake_minimum_required(VERSION 3.14)

project(sandbox)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# set global variables
set(CMAKE_CXX_FLAGS "-Wall -Wextra -Wconversion -fPIC")
set(CGAL_DO_NOT_WARN_ABOUT_CMAKE_BUILD_TYPE TRUE)

set(SOURCES main.cpp)
add_executable(${PROJECT_NAME})
set_target_properties(${PROJECT_NAME} PROPERTIES OUTPUT_NAME "out")
target_sources(${PROJECT_NAME} PRIVATE ${SOURCES})
