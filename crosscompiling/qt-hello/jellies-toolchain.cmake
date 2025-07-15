# Target platform and architecture
set(CMAKE_SYSTEM_NAME Linux)
set(CMAKE_SYSTEM_PROCESSOR arm)

# Toolchain compilers
set(CMAKE_C_COMPILER   /root/toolchains/gcc-arm-9.2-2019.12-x86_64-arm-none-linux-gnueabihf/bin/arm-none-linux-gnueabihf-gcc)
set(CMAKE_CXX_COMPILER /root/toolchains/gcc-arm-9.2-2019.12-x86_64-arm-none-linux-gnueabihf/bin/arm-none-linux-gnueabihf-g++)

# Qt installation prefix path (for find_package)
set(CMAKE_PREFIX_PATH /root/qt/QT5.9_A5)

# Let CMake know where to find headers/libraries
set(CMAKE_FIND_ROOT_PATH /root/qt/QT5.9_A5)

# Ensure CMake uses the target root path only for includes/libs
set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)
