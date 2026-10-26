#include<iostream>
#include<string>
void swap(std::string& s1,std::string& s2){
    std::string t;
    t=s1;
    s1=s2;
    s2=t;
}
int main(){
    std::string n1,n2;
    std::cin>>n1>>n2;
    swap(n1,n2);
    std::cout<<n1<<" "<<n2<<std::endl;
}