OPTION(ENABLE_GTEST "GTest" ON)
if(ENABLE_GTEST)

    find_package(Boost REQUIRED)
    find_package(GTest REQUIRED)

    file(GLOB ALL_TEST_CPP_FILES ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)
    add_executable(CPPTemplate_Test ${ALL_TEST_CPP_FILES})
    target_link_libraries (CPPTemplate_Test
        GTest::gtest_main
        TestTool
    )

    add_test(
        NAME GTest
        COMMAND $<TARGET_FILE:CPPTemplate_Test>
    )
else()
    message(status "No GTest")
endif()
