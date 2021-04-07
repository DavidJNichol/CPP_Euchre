cmake_minimum_required(VERSION 2.8)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


project(CPP_Euchre)

add_executable(CPP_Euchre src/main.cpp)
include_directories(.)
include(gtest.cmake)

set(UNIT_TESTS Test/Test.cpp)
set(MAIN_FILE src/main.cpp)
add_executable(demo ${MAIN_FILE} src)

add_executable(demo-test ${UNIT_TESTS} src)
target_link_libraries(demo-test gtest ${CMAKE_THREAD_LIBS_INIT})
