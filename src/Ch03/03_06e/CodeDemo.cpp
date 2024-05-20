// Learning C++ 
// Exercise 03_06
// Pointers, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    int a = 37;
    int *ptr;

    ptr = &a;

    std::cout << "           The content of a is " << a << std::endl;//37
    std::cout << "    ptr is pointing to address " << ptr << std::endl;//0x7fffffffde4c
    std::cout << "           The address of a is " << &a << std::endl;//0x7fffffffde4c
    std::cout << "Where ptr is pointing, we have " << *ptr << std::endl;//37
    std::cout << "         The address of ptr is " << &ptr << std::endl;////0x7fffffffde4c
    
    std::cout << std::endl << std::endl;
    return (0);
}
