#include <iostream>

int main(){
    double n1, n2, sum;
//this line declares three variables of a numerical type
//n1, n2, sum are the names of the variables
//double is the type, which represents general decimal numbers
    std::cout << "Please enter the first number." << std::endl;
    std::cin >> n1;
    std::cout << "Please enter the second number." << std::endl;
    std::cin >> n2;
    sum = n1 + n2;
//c=a+b is only valid; not a+b=c; it is a syntax error
//with the first way a value is stored for c
    std::cout << n1 << "+" << n2 << "=" << sum << std::endl;
}