cmake_minimum_required(VERSION 3.10)
project(CPPTemplate VERSION 0.1.0 LANGUAGES C CXX)
include(./cmake/variant.cmake)

# set(CMAKE_POSITION_INDEPENDENT_CODE ON)
message( STATUS "Current system is :  ${CMAKE_SYSTEM_NAME}.")

find_program(CLANG_TIDY_EXE NAMES "clang-tidy" DOC "Path to clang-tidy executable")
if(NOT CLANG_TIDY_EXE)
    message(STATUS "clang-tidy not found.")
else()
    message(STATUS "clang-tidy found: ${CLANG_TIDY_EXE}")
    set(CMAKE_CXX_CLANG_TIDY clang-tidy --config-file ${CMAKE_CURRENT_LIST_DIR}/.clang-tidy "--header-filter=${CMAKE_CURRENT_LIST_DIR}/(src|tests)/.*")
endif()

option(ENABLE_ADDRESS_SANITIZER "Enable Address Sanitizer on Linux" OFF)

enable_testing()
add_subdirectory(./src)
add_subdirectory(./test)
