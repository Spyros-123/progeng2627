#include <iostream>
int main(){
    int n, i=0;
    double x,result=0;
    std::cin>>x>>n;
    while(i<n){
        result=result+x;
        i=i+1;
    }
    std::cout<<result<<std::endl;
}