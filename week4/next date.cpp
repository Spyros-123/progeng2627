#include<iostream>
bool leapyear(int year){
    bool ly;
    if(year%4!=0){
        ly=false;
    }
    else if((year%100==0)&&(year%400!=0)){
        ly=false;
    }
    else{
        ly=true;
    }
    return ly;
}
void nextdate(int d1,int m1,int y1,int& d2,int& m2,int& y2){
        if(m1==1||m1==3||m1==5||m1==8||m1==10||m1==12){
            if(d1==31){
                d2=1;
                if(m1==12){
                    m2==1;
                    y2==y1+1;
                }
            }
        else if(m1==2){
            if(leapyear(y1)){
                if(d1=29){
                    d2=1;
                    m2=m1+1;
                }
                else{
                    d2=d1+1;
                    m2=m1+1;
                }
            }
            else{
                if(d1=28){
                    d2=1;
                    m2=m1+1;
                }
                else{
                    d2=d1+1;
                    m2=m1+1;
            }
        }
        }
        else{
            m2=m1+1;
            if(d1==30){
                d2=1;
            }
            else{
                d2=d1+1;
            }
        }
}
int main(){
    int d3,m3,y3;
    nextdate(31,12,2026,d3,m3,y3);
    std::cout<<d3<<" "<<m3<<" "<<y3<<std::endl;
}