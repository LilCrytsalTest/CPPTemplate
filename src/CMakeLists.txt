OPTION(ENABLE_MAIN "Main Process" ON)
if(ENABLE_MAIN)
    set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
    file(GLOB UTILS_CPP_FILES ${CMAKE_CURRENT_SOURCE_DIR}/Utils/*.cpp)
    find_package(Boost COMPONENTS regex system filesystem thread REQUIRED)

    message( STATUS "UTILS_CPP_FILES is as following: ${UTILS_CPP_FILES} ")

    add_library(TestTool ${UTILS_CPP_FILES})
    target_link_libraries (TestTool
        Boost::regex
        Boost::system
        Boost::filesystem
        Boost::thread
    )
    target_include_directories(TestTool PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/Utils/)

    add_executable(${PROJECT_NAME}
        ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp
    )

    target_link_libraries (${PROJECT_NAME}
        TestTool
    )
    message( STATUS "Enable main process.")
else()
    message( STATUS "No main process.")
endif()