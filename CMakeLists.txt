cmake_minimum_required(VERSION 3.15)
project(alterego)

set(CMAKE_CXX_STANDARD 11)

# sets directories
set(AE_SRC ./source/src)
set(AE_HEAD ./source/headers)

# includes cmake/FindSDL2.cmake
set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake/")

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIR})
include_directories(${AE_SRC})
include_directories(${AE_HEAD})

# which files should be compiled
set(SOURCE_FILES
        ${AE_SRC}/main.cpp

        ${AE_SRC}/graphics.cpp
        ${AE_SRC}/game.cpp
        ${AE_SRC}/input.cpp
        ${AE_HEAD}/graphics.h
        ${AE_HEAD}/game.h
        ${AE_HEAD}/input.h

        ${AE_SRC}/stat.cpp
        ${AE_SRC}/questions.cpp
        ${AE_HEAD}/stat.h
        ${AE_HEAD}/alterego_stats.h
        ${AE_HEAD}/questions.h source/headers/profile.h)

# which files should produce executables
add_executable(alterego ${SOURCE_FILES})
target_link_libraries(alterego ${SDL2_LIBRARY})
