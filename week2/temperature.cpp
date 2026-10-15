#include <iostream>
int main(){
    double celcius, fahrenheit;
    std::cout<<"Please enter your temperature in degrees Celcius."<<std::endl;
    std::cin>>celcius;
    fahrenheit=(celcius*1.8)+32.0;
    std::cout<<"Your temperature in fahrenheit is "<<fahrenheit<<" degrees."<<std::endl;
}