#include <iostream>
int main(){
    int year,rem;
    std::cout<<"Enter a year."<<std::endl;
    std::cin>>year;
    rem=year%4;
    bool not_leap_year;
    not_leap_year=(rem!=0);
    if(not_leap_year){
        std::cout<<"Your year is not a leap year"<<std::endl;
    }
    else{
        if(year%400==0){
            std::cout<<"Your year is a leap year"<<std::endl;
        }
        else{
            if(year%100==0){
                std::cout<<"Your year is not a leap year."<<std::endl;
            }
            else{
                std::cout<<"Your year is a leap year."<<std::endl;
            }
        }
    }
}