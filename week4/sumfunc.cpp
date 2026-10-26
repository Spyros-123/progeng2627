#include<iostream>
#include<cmath>
double sumpow(int n,double x){
    double Σ=0;
    for(int i=1;i<n+1;i++){
        Σ=Σ+std::pow(x,i);
    }
    return Σ;
}
int main(){
    std::cout<<(sumpow(4,2)==30)<<std::endl;
}