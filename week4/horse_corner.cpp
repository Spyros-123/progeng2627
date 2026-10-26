#include<iostream>
#include<cstdlib>
#include<ctime>
#include<cmath>
int main(){
int dx,dy,vx,vy,i=0,yy,xx;
bool win=true;
//Seed the random number generator
    std::srand(std::time(NULL));
//Generate random coordinates from 2 to 7
int x=std::rand()%6+2;
int y=std::rand()%6+2;
yy=y;
xx=x;
while(win){
    i=0;
    y=yy;
    x=xx;
    while((i<5)&&(win)){
        
        std::cout<<"The position of your horse is: x="<<x<<" and y="<<y<<"."<<std::endl;

std::cout<<"Please enter the square you want to move to."<<std::endl;
std::cin>>dx;
std::cin>>dy;
vx=abs(dx-x);
vy=abs(dy-y);
if((dx>8)||(dy>8)||(dx<1)||(dy<1)){
    std::cout<<"The coordinates you have entered are invalid."<<std::endl;
}
else if(((vx!=2)&&(vy!=2))||((vx!=1)&&(vy!=1))){
    std::cout<<"The coordinates you have entered are invalid."<<std::endl;
}
else{
    std::cout<<"Your horse moved to x="<<dx<<" and y="<<dy<<std::endl;
    y=dy;
    x=dx;
    i=i+1;
    if(((x==1)&&(y==1))||((x==1)&&(y==8))||((x==8)&&(y==1))||((x==8)&&(y==8))){
        win=false;
    }
    if((i==5)&&(win)){
std::cout<<"You exceeded 5 tries; Please try again."<<std::endl;
    }
}
}
}
std::cout<<"You moved your horse to a corner in "<<i<<" move(s)."<<std::endl;
}