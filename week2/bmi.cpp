#include <iostream>
int main(){
    double height, weight, bmi;
    std::cout<<"Please enter your height in meters."<<std::endl;
    std::cin>>height;
    std::cout<<"Please enter your weight in kilograms"<<std::endl;
    std::cin>>weight;
    bmi=weight/(height*height);
    std::cout<<"Your body mass index is: "<<bmi<<"."<<std::endl;
}