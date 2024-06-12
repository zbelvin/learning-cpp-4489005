// Learning C++ 
// Exercise 02_10
// Type Casting, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    float flt;
    int32_t sgn;
    uint32_t unsgn;

    flt = -7.66;    // without the trailing f, it's a double, not a float
    sgn = flt;      // should truncate value to an integer
    unsgn = sgn;    // can't handle a negative value - will print binary value for -7

    std::cout << " float: " << flt << std::endl;
    std::cout << " int32: " << sgn << std::endl;
    std::cout << "uint32: " << (int32_t) unsgn << std::endl;    // casting the unsigned int to a signed int so it can handle the negative
    
    std::cout << std::endl << std::endl;
    return (0);
}
