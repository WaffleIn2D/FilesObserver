cmake_minimum_required(VERSION 3.9)
project(Files-observer)

set(CMAKE_CXX_STANDARD 17)

file(GLOB_RECURSE SOURCE_FILES
        ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp
)

set(INCLUDES
        ${CMAKE_CURRENT_SOURCE_DIR}/src/
)

add_executable(Files-observer ${SOURCE_FILES})