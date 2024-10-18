##### Include Boost libary ######

#set(Boost_LIB_PREFIX "lib")                                         ## 真的是困扰好几天，看编译产物 注意名字匹配
#set(BOOST_ROOT "D:/Workspace/Project/boost")
#set(BOOST_LIBRARYDIR "D:/Workspace/Project/boost/stage/lib")
#set(BOOST_INCLUDEDIR "D:/Workspace/Project/boost")

# set(Boost_NO_SYSTEM_PATHS ON)                     # 开启后不会再去其他位置寻找Boost库
# set(Boost_DEBUG ON)                               # 是否开启Boost Debug模式，ON位开启，OFF关闭。开启之后会输出很多调试信息，方便寻找错误
# set(Boost_ARCHITECTURE "-x64")                    # CPU架构，对应库文件文件名里的x32或者x64
# set(Boost_THREADAPI "win32")                      # 线程类型，对应thread模块文件名里面的pthread或者win32

# cmake_policy(SET CMP0074 NEW)

OPTION(ENABLE_MAIN "Main Process" ON)
if(ENABLE_MAIN)
    set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
    file(GLOB_RECURSE ALL_CPP_FILES ${CMAKE_SOURCE_DIR}/*.cpp)
    find_package(Boost COMPONENTS system filesystem thread REQUIRED)

    include_directories(src)
    add_executable(${PROJECT_NAME}
        ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/Utils/TestTool.cpp
    )
    target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
    target_link_libraries (${PROJECT_NAME} boost::boost)
else()
    message( STATUS "Log")
endif()

##### End include Boost libary ######