#include <iostream>
int main(){
    int n_in, a=0;
    std::cout<<"Enter a number."<<std::endl;
    std::cin>>n_in;
    while(n_in!=0){
        a=a+n_in;
        std::cout<<"Your sum so far is "<<a<<"."<<std::endl;
        std::cout<<"Please enter a number."<<std::endl;
        std::cin>>n_in;
    }
}