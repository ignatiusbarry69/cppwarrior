#include <iostream>


int main(){
    int i = 3;
    int const *p = &i;
    std::cout << "Value of p: " << *p << std::endl;
    i = 5;
    std::cout << "Value of p: " << *p << std::endl;
    // *p = 10; //illegal assignment to const pointer
    p = new int(10); //legal, p is a pointer to const int, but p itself are not const
    std::cout << "Value of p: " << *p << std::endl;
    int *const q = &i;
    // q = &i; //illegal even if its redeclaration with the same address because q is a const pointer
    *q = 31; //q are const pointer to plain int, not const int
    std::cout << "Value of q: " << *q << std::endl;
    p = q; //legal, we can point p to q, but we can't reassign q to p, because q is a const pointer
    std::cout << "Value of p: " << *p << std::endl;
    // int **r = p; //illegal, p are a pointer to int, r want pointer to pointer to int
    // int **r = &p; //illegal, r want a plain int pointer, &p are pointer to pointer of const int
    // int *s = p; //illegal, same reason
    int *const * r = &q; //this looks ridiculous but its a legal pointer to const pointer to int
    std::cout << "Value of r: " << *r << std::endl;
    std::cout << "Value of *r: " << **r << std::endl;
    int *s = q; //legal
    int **t = &s;
    std::cout << "Value of t: " << *r << std::endl;
    std::cout << "Value of *t: " << **r << std::endl;
    int const** u = &p; //this also legal its a pointer to pointer to const int, p indeed are a pointer to const int
    std::cout << "Value of u: " << *u << std::endl;
    std::cout << "Value of *u: " << **u << std::endl;
    // u = &q; //this will be illegal, its different type
    return 0;
}