#include <iostream>
int main(){
    double n;
    std::cout<<"Please enter a number."<<std::endl;
    std::cin>>n;
    if(n<0){
        n=-n;
    }
    std::cout<<"The absolute value of your number is:"<<n<<std::endl;
}