#include <iostream>
// A resource is something that has to be acquired and later released
// memory alocated with new must be deleted
// memory not alocated with new must not be deleted
// It is usually a good idea to immediately place a pointer 
// that represents ownership in a resource handle class, such as vector, string, and unique_ptr.

// A reference is an alternative name for an object, an alias. 
// The main use of references is for specifying arguments and return 
// values for functions in general and for overloaded operators 

// • lvalue references: to refer to objects whose value we want to change
// • lvalue const references: to refer to objects whose value we do not want to change (e.g., a constant)
// • rvalue references: to refer to objects whose value we do not need to preserve after we have
// used it (e.g., a temporary)

int main(){ 
    f();
    return 0;
}

void f()
{
int var = 1;
int& r {var}; // r and var now refer to the same int
int x = r; // x becomes 1
r = 2; // var becomes 2
}