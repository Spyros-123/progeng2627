#include<iostream>
#include<cmath>
bool quadsolve(double a, double b, double c, double& x1,double& x2){
    bool realsol;
    double delta=b*b-4*a*c;
    if(delta<0){
        realsol=false;
    }
    else{
        realsol=true;
        x1=(-b+std::sqrt(delta))/(2*a);
        x2=(-b-std::sqrt(delta))/(2*a);
    }
    return realsol;
}
int main(){
    double a,b,c,s1,s2;
    std::cin>>a>>b>>c;
    if((quadsolve(a,b,c,s1,s2))){
    quadsolve(a,b,c,s1,s2);
    std::cout<<"x1="<<s1<<" and x2="<<s2<<"."<<std::endl;
    }
    else{
        std::cout<<"There are no real solutions."<<std::endl;
    }
}