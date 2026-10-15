#include <iostream>
#include <string>
int main(){
    double tempin, tempout;
    std::string unitin, unitout;
    std::cin>>tempin>>unitin;
    const double m=1.8;
    if((unitin=="C")||(unitin=="c")){
        unitout="F";
        tempout=tempin*m+32;
        std::cout<<tempout<<unitout<<std::endl;
    }
    else if(unitin=="F"||unitin=="f"){
        unitout="C";
        tempout=(tempin-32)/m;
        std::cout<<tempout<<unitout<<std::endl;
    }
    else{
        std::cout<<"error"<<std::endl;
    }
    
    }
