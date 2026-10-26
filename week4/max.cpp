#include<iostream>
double max(double n1, double n2){
    int z;
    if(n1>n2){
    z=n1;
    }
    else{
    z=n2;
    }
    return z;
}
int main(){
    std::cout<<(max(3,4)==4)<<std::endl;
    std::cout<<(max(3,4)==9)<<std::endl;
}