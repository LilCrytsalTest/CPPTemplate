OPTION(ENABLE_GTEST "GTest" OFF)
if(ENABLE_GTEST)
    find_package(GTest REQUIRED)
    add_executable(${PROJECT_NAME}
        ${CMAKE_CURRENT_SOURCE_DIR}/TestToolTest.cpp
        ../src/Utils/TestTool.cpp
    )
else()
    message(status "No GTest")
endif()
