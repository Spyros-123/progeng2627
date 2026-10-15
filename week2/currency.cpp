#include <iostream>
int main(){
    double pounds, euros;
    std::cout<<"Please enter your balance in pounds."<<std::endl;
    std::cin>>pounds;
    euros=1.18*pounds;
    std::cout<<"Your balance corresponds to "<<euros<<"euros"<<std::endl;
}