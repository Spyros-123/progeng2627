#include<iostream>
#include<cmath>
void rect(double a,double b,double& A,double& P){
    P=2*a+2*b;
    A=a*b;
}
int main(){
    double A1,P1;
    rect(2,6,A1,P1);
    std::cout<<(A1==12)<<(P1==16)<<std::endl;
}