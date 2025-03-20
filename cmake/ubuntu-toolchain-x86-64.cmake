# 工具链文件的名称，通常用于标识
set(CMAKE_TOOLCHAIN_FILE_NAME "ubuntu.toolchain.cmake")

# 设置系统名称
set(CMAKE_SYSTEM_NAME Linux)
set(CMAKE_SYSTEM_PROCESSOR x86_64)

# 指定C++ 编译器
set(CMAKE_CXX_COMPILER g++)

# 启用address sanitizer
add_definitions(-D_DISABLE_VECTOR_ANNOTATION)
add_definitions(-D_DISABLE_STRING_ANNOTATION)
# 设置 C 和 C++ 编译选项
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fsanitize=address -fno-omit-frame-pointer")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=address -fno-omit-frame-pointer")
# 设置可执行文件和共享库的链接选项
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -fsanitize=address")
set(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} -fsanitize=address")
