#include <iostream>

int main(){
    const char* str = "Hello, World!"; //legal, string literal is const char array
    // char* str2 = "Hello, World!"; //illegal its must be const
    str = "Goodbye, World!";
    int *i = new int(5);
    int *ifromarray0 = new int[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr[10]; 
    int *ifromarray2 = arr+2;
    std::cout << "i from array 2 " << *ifromarray2 << std::endl; //should be null or crash or random
    arr[1] = 11;
    std::cout << "i from array 2 " << *(arr+1) << std::endl; //should be null or crash or random
    std::cout << "i from array: " << *ifromarray0 << std::endl; //should be 1
    return 0;
}