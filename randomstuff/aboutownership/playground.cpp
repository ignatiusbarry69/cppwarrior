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

// reference never really there itself, its just alias for an object, 
// thus it cant be referenced/pointer cant point to a "reference" 
// unlike pointers, that somewhat exist on their own and can be referenced (pointer to pointer) and we can perform arithmetic on them

// rvalues are whatever thats not lvalue, such as literals ("Somethinhg"), temporaries; f(),

// Initialization of a reference is trivial when the initializer is an lvalue (an object whose address
// you can take; see §6.4). The initializer for a ‘‘plain’’ T& must be an lvalue of type T.
// The initializer for a const T& need not be an lvalue or even of type T. In such cases:
// [1] First, implicit type conversion to T is applied if necessary (see §10.5).
// [2] Then, the resulting value is placed in a temporary variable of type T.
// [3] Finally, this temporary variable is used as the value of the initializer.

// double& dr = 1; // error : lvalue needed
// const double& cdr {1}; // OK -> below

// double temp = double{1}; // first create a temporar y with the right value
// const double& cdr {temp}; // then use the temporar y as the initializer for cdr

// we dont use const &&, its ridiculous

// move semantic in a container or resource handle class is a way to transfer ownership of a resource 
// from one object to another without copying the resource using an rvalue reference

// use pointer when:
// you need to change which object to refer to
// you need a null state
// need a collection of something that refer to an object, there are no array of references

// else user references, for example:
// you want to be sure that a name always refers to the same object
// you want to use a user-defined (overloaded) operator on something that refers to an object like Matrix operator−(const Matrix∗, const Matrix∗); 
// the above example is ilegal cause it will be defined like Matrix x2 = &y−&z;

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

void g()
{
int var = 0;
int& rr {var};
++rr; // var is incremented to 1
int* pp = &rr; // pp points to var
}

