cmake_minimum_required(VERSION 3.5)
project(qt-hello)

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_PREFIX_PATH "/root/qt/QT5.9_A5")

find_package(Qt5 REQUIRED COMPONENTS Core)

add_executable(helloqt main.cpp)

target_link_libraries(helloqt Qt5::Core)
