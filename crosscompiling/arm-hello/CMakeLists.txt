cmake_minimum_required(VERSION 3.16)
project(HelloArm CXX)

add_executable(hello-arm hello.cpp)
# cmake .. -DCMAKE_TOOLCHAIN_FILE=../jellies-toolchain.cmake
# export PATH=/root/toolchains/gcc-arm-9.2-2019.12-x86_64-arm-none-linux-gnueabihf/bin:$PATH
# export PATH=$PATH:/root/toolchains/cortex-a5/bin
