#include<iostream>
bool prm(int n){
    for(int i=2;i<(n/2)+1;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n1,n2;
    std::cin>>n1>>n2;
    for(int i2=n1;i2<n2+1;i2++){
        if((prm(i2))){
            std::cout<<i2<<std::endl;
        }
    }
}