#include<iostream>
double myabs(double in){
    double abs;
    if(in<0){
        abs=-in;
    }
    else{
        abs=in;
    }
    return abs;
}
int main(){
    double n;
    std::cin>>n;
    std::cout<<myabs(n)<<std::endl;
}