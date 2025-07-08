#ifndef DIGITS_HPP
#define DIGITS_HPP

#include <iostream>

inline void digits()
{
for (int i=0; i!=10; ++i)
std::cout << static_cast<char>('0'+i);
}

#endif