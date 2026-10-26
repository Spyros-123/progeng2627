#include<iostream>
double mypow(double b, double e){
    double pow=1;
    if(e<0){
for(int i=0; i<-e;i++){
    pow=pow/b;
}
    }
    else{
        for(int i2=0;i2<e;i2++){
            pow=pow*b;
        }
    }
    return pow;
}
int main(){
    double base,r=0;
    int n;
    std::cin>>base;
    std::cin>>n;
    for(int i3=1;i3<n+1;i3++){
        r=r+mypow(base,i3);
    }
    std::cout<<r<<std::endl;
}