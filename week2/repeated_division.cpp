#include <iostream>
int main(){
    int n,s,q,k=0;
    std::cout<<"Please enter a number."<<std::endl;
    std::cin>>n;
    std::cout<<"Please enter its divisor."<<std::endl;
    std::cin>>s;
    while(n-s>=0){
        n=n-s;
        k=k+1;
    }
   
    std::cout<<"The quotient is "<<k<<", and the remainder is "<<n<<"."<<std::endl;
}