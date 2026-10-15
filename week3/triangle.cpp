#include <iostream>
#include <cmath>
int main(){
    double a, b , c, p, A, s;
    std::cout<<"Enter three side lengths."<<std::endl;
    std::cin>>a>>b>>c;
    if((a+b<c)||(a+c<b)||(c+b<a)){
        std::cout<<"Your triangle is not valid."<<std::endl;
    }
    else{
        p=a+b+c;
        s=p/2;
        A=std::sqrt(s*(s-a)*(s-b)*(s-c));
        if((a==b)&&(a==c)){
            std::cout<<"Your triangle is equilateral."<<std::endl;
        }
        else if((a==b)||(a==c)||(b==c)){
            std::cout<<"Your triangle is isosceles."<<std::endl;
        }
        else{
            std::cout<<"Your triangle is scalene."<<std::endl;
        }
        std::cout<<"The perimeter of your triangle is "<<p<<"."<<std::endl;
        std::cout<<"The area of your triangle is "<<A<<"."<<std::endl;
    }
}