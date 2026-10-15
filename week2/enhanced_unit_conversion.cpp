#include <iostream>
#include <string>
int main(){
    double length_in, length_out;
    std::string unit_in, unit_out;
    std::cin>>length_in>>unit_in;
    const double mile_to_km=1.609;
    if(unit_in=="km"){
        unit_out="mile";
        length_out=length_in/mile_to_km;
        std::cout<<length_out<<" "<<unit_out<<std::endl;
    }
    else if(unit_in=="mile"){
        unit_out="km";
        length_out=length_in*mile_to_km;
        std::cout<<length_out<<" "<<unit_out<<std::endl;
    }
    else{
        std::cout<<"error, unit not recognized."<<std::endl;
    }

}