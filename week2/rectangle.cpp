#include <iostream>
int main(){
    double s1, s2, perimeter, area;
    std::cout<<"Please enter the length of one side of you rectangle in meters"<<std::endl;
    std::cin>>s1;
    std::cout<<"Plese enter the length of the adjacent side of your rectangle in meters"<<std::endl;
    std::cin>>s2;
    perimeter=2*(s2+s1);
    area=s1*s2;
    std::cout<<"The area of you rectangle is: "<<area<<" m^2"<<std::endl;
    std::cout<<"The perimeter of your rectangle is: "<<perimeter<<"m"<<std::endl;
    
}