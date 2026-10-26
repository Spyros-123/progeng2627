#include<iostream>
//we can define a function that returns a bool
bool leap_year(int year){
    bool ly;
    if(year%4!=0){
        ly=false;
    }
    else if((year%100==0)&&(year%400!=0)){
        ly=false;
    }
    else{
        ly=true;
    }
    return ly;
}
int main(){
    std::cout<<(leap_year(1600)==true)<<std::endl;
    std::cout<<(leap_year(1700)==false)<<std::endl;
}