把import_src文件夹的代码编译成静态库，再由主目录的代码调用.
主目录CMakeLists.txt文件添加了下面的内容: 使用命令 add_subdirectory 指明本项目包含一个子目录 import_src，这样 import_src 目录下的 CMakeLists.txt 文件和源代码也会被处理 。使用命令 target_link_libraries 指明可执行文件 mathFun 需要连接一个名为 MathFunctions 的链接库 。

子目录中的 CMakeLists.txt：
在该文件中使用命令 add_library 将 src 目录中的源文件编译为静态链接库。

未解决的问题：A.cpp文件没包含进去
