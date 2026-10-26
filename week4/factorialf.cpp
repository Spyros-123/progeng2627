#include<iostream>
int myfact(int n){
    int r=1,k;
    k=n+1;
    for(int i=0;i<n;i++){
        k=k-1;
        r=r*k;
    }
    return r;
}
int main(){
    int f;
    std::cin>>f;
    std::cout<<myfact(f)<<std::endl;
}
