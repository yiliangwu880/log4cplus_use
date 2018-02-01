#project name
CMAKE_MINIMUM_REQUIRED(VERSION 2.6) #cmake最低版本需求，不加入此行会受到警告信息
PROJECT(HELLO) #项目名称　　

include_directories(system ../external/include/)
# lib directories
LINK_DIRECTORIES(
  #项目引用第三方库
  ${PROJECT_BINARY_DIR}/../external/lib

)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -g -Wall -pthread  -Werror -DDEBUG -fno-builtin-malloc -fno-builtin-calloc -fno-builtin-realloc -fno-builtin-free -fexceptions -fnon-call-exceptions")


AUX_SOURCE_DIRECTORY(. SRC_LIST) #把当前目录(.)下所有源代码文件和头文件加入变量SRC_LIST

ADD_EXECUTABLE(hello ${SRC_LIST}) 

# 设置链接库
target_link_libraries(hello liblog4cplus.a)
