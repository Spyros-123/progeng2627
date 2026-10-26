#include<iostream>
void div(int a, int b, int& r, int& q){
    q=a/b;
    r=a-q*b;
}
int main(){
    int q1,r1;
    div(4,3,q1,r1);
    std::cout<<(q1==1)<<(r1==1)<<std::endl;
}