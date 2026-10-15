#include <iostream>
#include <string>
int main(){
    double lin,lout;
    std::string in,out;
    std::cin>>lin>>in;
    const double c=1.609;
    bool valid_unit=true;
    //we assume the user will input a valid unit
    if(in=="km"){
        out="miles";
        lout=lin/c;
    }
    else if(in=="miles"){
        out="km";
        lout=lin*c;
    }
    else{
        valid_unit=false;
    }
    if(valid_unit){
        std::cout<<lout<<" "<<out<<std::endl;
    }
    else{
        std::cout<<"error"<<std::endl;
    }
}