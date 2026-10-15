#include <iostream>
int main(){
    double n,s=0,a,i=1;
    std::cout<<"Please enter a number"<<std::endl;
    std::cin>>n;
    while(n!=0){
        s=s+n;
        a=s/i;
        i=i+1;
        std::cout<<"Your average is "<<a<<"."<<std::endl;
        std::cin>>n;
    }
}