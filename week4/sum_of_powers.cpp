#include<iostream>
#include<cmath>
int main(){
    double x,r=0,t;
    int n;
    std::cin>>x;
    std::cin>>n;
    for(int i=1;i<n+1;i++){
        t=std::pow(x,i);
        r=r+t;
    }
    std::cout<<r<<std::endl;
}