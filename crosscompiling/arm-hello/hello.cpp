#include <iostream>
// TRAN5act10n+953
// scp build-arm/hello-arm root@192.168.1.199:/apps/testarm/
// ssh root@192.168.1.199
// ssh-keygen -t rsa -b 4096 -C "barrywsl"
// ssh-copy-id root@192.168.1.199
int main() {
    std::cout << "Hello, ARM Worldddd!\n";
    return 0;
}

// rm -rf build-arm

// cmake -DCMAKE_TOOLCHAIN_FILE=jellies-toolchain.cmake -B build-arm
// cmake --build build-arm