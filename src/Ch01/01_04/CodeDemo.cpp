// Learning C++ 
// Challenge Solution 01_04
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    //declares a variable str of type std::string
    std::string str;

    /*
    std::cout is used to print output to the console
    std::flush is used to flush the output buffer, ensuring that the prompt is displayed immediately
    */
    std::cout << "Enter your name: " << std::flush;

    //The input entered by the user is stored in the variable str
    std::cin >> str;

    /*
    std::cout: outputs the text "Nice to meet you, ", followed by the content of the variable str, and then "!".
    std::endl: adds a newline character at the end and flushes the output buffer.
    */
    std::cout << "Nice to meet you, " << str << "!" << std::endl;

    std::cout << std::endl << std::endl;

    //indicate that the program executed successfully
    return (0);
}

