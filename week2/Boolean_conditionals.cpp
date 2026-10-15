#include <iostream>
int main(){
    int n, rem;
    std::cout<<"Please enter a number."<<std::endl;
    std::cin>>n;
    rem=n%2;
    bool is_even;
    //yes/no true/false values also have a tupe called bool(boolean)
    is_even=(rem==0);
    //is it true or false that the remainder is zero?
    //if it is true then is_even stores the value true
    if(is_even){
        std::cout<<"Your number is even."<<std::endl;
    }
    else{
        std::cout<<"Your number is odd."<<std::endl;
    }
}