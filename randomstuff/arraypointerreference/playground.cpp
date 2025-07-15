#include <iostream>
#include <cstring>

// ==============================================
// a[j] == ∗(&a[0]+j) == ∗(a+j) == ∗(j+a) == j[a]
// ==============================================


int main(){ //v[0] == *v
    int v[] = { 1, 2, 3, 4 };
    int* p1 = v; // pointer to initial element (implicit conversion)
    int* p2 = &v[0]; // pointer to initial element
    int* p4 = v+4; // pointer to one-beyond-last elemen, this will lead to undefined behavior if dereferenced
    int* pmin1 = v-1; //this too, its legal but if dereferenced its undefined
    int* p3 = v+3; //ok since v = v[0]
    printf(p1==p2 ? "yes\n" : "nope\n");
    printf(v[0]==*v ? "yes\n" : "nope\n");
    printf(v[1] == 1[v] == *v+1 ? "yes\n" : "nope\n");
    printf(v[1] == 1[v] && v[1] == *v+1 ? "yes\n" : "nope\n");
    std::cout<<*p3<<std::endl; // prints address of one-beyond-last element
    std::cout<<"======================================"<<std::endl; // prints address of one-beyond-last element
    char z[] = "Annemarie";
    char *p=z;
    char y[10];
    // y = p; // this is illegal, y is an array and cannot be reassigned
    strcpy(y, p); // but this is legal, we can copy the content of p to y
    std::cout << "p: " << *p << std::endl; // prints "A"
    std::cout << "y: " << y << std::endl; // prints "Annemarie"
    std::cout << "y: " << *y << std::endl; // the compiler was like, ok decay y into pointer first, then dereference first element
    //char c[] -> char *c | char *c[] -> char **c | char *c !-> char c[]
    std::cout << "y: " << y[0] << std::endl; // take first elemetn array way
    std::cout<<"======================================"<<std::endl; // prints address of one-beyond-last element

    int const arr[] = { 1, 2, 3, 4 };
    int const *p = arr; // 
    // "" / string literal == const char[n] --decayed-into--> const char* p
    return 0;
}
void comp(double arg[10]) // arg is a double*
{
for (int i=0; i!=10; ++i)
arg[i]+=99;
}
void samewithcomp(double* arg)
{
for (int i=0; i!=10; ++i)
    arg[i]+=99;
}
void fi(char v[])
{
for (int i = 0; v[i]!=0; ++i)
    std::cout << v[i] << std::endl;
}
void fp(char v[])
{
for (char* p = v; *p!=0; ++p)
    std::cout << *p << std::endl;
}