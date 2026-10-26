#include<iostream>
double mypow(double b, int e){
    double pow=1;
    for(int i=0;i<e;i++){
        pow=pow*b;
    }
    return pow;
}
int main(){
    double base;
    int exp;
    std::cin>>base;
    std::cin>>exp;
    std::cout<<mypow(base,exp)<<std::endl;
}