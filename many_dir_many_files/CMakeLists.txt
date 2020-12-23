# CMake 最低版本号要求
cmake_minimum_required (VERSION 2.8)

# 项目信息
project (Demo3)

# 查找当前目录下的所有源文件
# 并将名称保存到 DIR_SRCS 变量
aux_source_directory(. DIR_SRCS)

# 添加 import_src 子目录
add_subdirectory(import_src)

# 指定生成目标 
add_executable(mathFun ${DIR_SRCS})

# 添加链接库
# 其中MathFunctions是由目录import_src的代码编译成的静态库
target_link_libraries(mathFun MathFunctions)

