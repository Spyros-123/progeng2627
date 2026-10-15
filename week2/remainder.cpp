#include <iostream>
int main(){
    int n1, rem;
//double is the numerical type for non-integer numbers whereas int is the one for integers
    std::cout<<"Please enter a number."<<std::endl;
    std::cin>>n1;
    rem = n1 % 2;
// the operator % outputs the remainder when a number n is divided by any number placed on the right of the symbol
// in which case integer division by 2 can leave a remainder of either zero or 1
//therefore if the number is odd rem will equal to 1
// and if it is even rem will equal to 2
//the remainder operator in C++ only works if the divided number is an INTEGER!!!
    std::cout<<"In the following line 0 means even and 1 means odd"<<std::endl;
    std::cout<<rem<<std::endl;
}

