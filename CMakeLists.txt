cmake_minimum_required(VERSION 3.5.0)
project(CPPTemplate VERSION 0.1.0 LANGUAGES C CXX)
set(CMAKE_CXX_STANDARD 17)

# set(CMAKE_POSITION_INDEPENDENT_CODE ON)
message( STATUS "Current system is :  ${CMAKE_SYSTEM_NAME}.")

add_subdirectory(./src)
add_subdirectory(./test)
