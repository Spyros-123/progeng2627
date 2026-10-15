#include <iostream>
int main(){
    int n, rem;
    std::cout<<"Please enter a number."<<std::endl;
    std::cin>>n;
    rem=n%2;
    if(rem==0){
        std::cout<<"Your number is even."<<std::endl;
    }
    else{
        std::cout<<"Your number is odd."<<std::endl;
    }
}