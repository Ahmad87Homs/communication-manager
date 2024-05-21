cmake_minimum_required(VERSION 3.22.0)
file(GLOB_RECURSE SRC_F ${PROJECT_SOURCE_DIR}/app *.cpp)
 target_sources(${PROJECT_NAME} PRIVATE ${SRC_F})

# set (SRC main.cpp)
