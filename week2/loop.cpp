#include <iostream>

int main(){
    int n, counter=0;
    //we have a variable counter
    //counting how many times we print
    //initially we have printed 0 times
    //name of the counter could be anything, eg. y, x etc...
    std::cin>>n;
    while(counter<n){
        std::cout<<"Hello!"<<std::endl;
        //if the condition inside the loop is true we enter the loop
        // if it is false we get past in
        counter=counter+1;
    }
}