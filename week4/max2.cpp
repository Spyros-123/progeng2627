#include<iostream>
double max(double n1,double n2,double n3){
    double z;
    if((n1>n2)&&(n1>n3)){
        z=n1;
    }
    else if((n2>n1)&&(n2>n3)){
        z=n2;
    }
    else{
        z=n3;
    }
    return z;
}
int main(){
    std::cout<<(max(2,3,4)==4)<<std::endl;
}