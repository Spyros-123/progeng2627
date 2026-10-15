//
#include <iostream>
#include <string>
//Includes header for text variables
int main(){
    std::string user_name;
//this is the declaration of a variable:
// user_name is the name of the variable
// std::string is the type of the variable
// string variables can contain text
    std::cout << "What is your name?" <<std::endl;
//
    std::cin >> user_name;
//cin stand for console input
//(>>) input (<<) output, (<<) is printed
    std::cout << "Hello, " << user_name << "!" <<std::endl;
}
//note: at the end, C++ instructions end with ;