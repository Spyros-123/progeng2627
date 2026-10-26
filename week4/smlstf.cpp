#include<iostream>
int smallestfactor(int n){
    for(int i=2;i<((n/2)+1);i++){
        if(n%i==0){
            return i;
        }
    }
    return 0;
}
int main(){
    std::cout<<(smallestfactor(11)==0)<<std::endl;
}