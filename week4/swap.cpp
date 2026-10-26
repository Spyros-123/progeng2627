#include<iostream>
void swap(int& n1,int& n2){
    int t;
    t=n1;
    n1=n2;
    n2=t;
}
int main(){
    int z1,z2;
    std::cin>>z1>>z2;
    swap(z1,z2);
    std::cout<<z1<<" "<<z2<<std::endl;
}