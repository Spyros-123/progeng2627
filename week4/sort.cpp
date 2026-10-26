#include<iostream>
void swap(double& n1,double& n2){
    double t;
    t=n1;
    n1=n2;
    n2=t;
}
void sort(double& s1,double& s2,double& s3){
    if((s2>s1)&&(s2>s3)){
        swap(s1,s2);
        if(s3>s2){
            swap(s2,s3);
        }
    }
    else if((s3>s1)&&(s3>s2)){
        swap(s1,s3);
        if(s3>s2){
            swap(s2,s3);
        }
    }
    else{
        if(s3>s2){
            swap(s2,s3);
        }
    }   
}
int main(){
    double k1,k2,k3;
    std::cin>>k1>>k2>>k3;
    sort(k1,k2,k3);
    std::cout<<k1<<" "<<k2<<" "<<k3<<std::endl;
}
