#include <iostream>
#include <stdio.h>
#include "digits.hpp"
int main(){
    std::cout << "Hello, World!" << std::endl;
    // digits();
    for (int i=0; i!=10; ++i){
        std::cout << static_cast<char>('0'+i)<<std::endl;
    }
    return 0;
}