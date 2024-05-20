// Learning C++ 
// Exercise 02_10
// Type Casting, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    float flt;
    int32_t sgn;
    uint32_t unsgn;

    flt = -7.66;//-7.66
    sgn = flt;//-7
    unsgn = sgn;//4294967289 or (int32_t) unsgn//-7

    std::cout << " float: " << flt << std::endl;
    std::cout << " int32: " << sgn << std::endl;
    std::cout << "uint32: " << (int32_t) unsgn << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
