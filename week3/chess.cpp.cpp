#include<iostream>
#include<cmath>
#include<string>
int main(){
    int x,y,dx,dy,vx,vy;
    std::string piece;
    std::cout<<"Please enter your piece."<<std::endl;
    std::cin>>piece;
    if((piece!="knight")&&(piece!="pawn")&&(piece!="queen")&&(piece!="king")&&(piece!="bishop")&&(piece!="rook")){
        std::cout<<"The piece you have entered does not exist."<<std::endl;
    }
    else{
    std::cout<<"Please enter the coordinates of your "<<piece<<"."<<std::endl;
    std::cin>>x>>y;
    if((x>8||x<1)||(y>8||y<1)){
        std::cout<<"The coordinates you have entered are invalid."<<std::endl;
    }
    else{
        std::cout<<"Please enter the square you want to move to."<<std::endl;
        std::cin>>dx>>dy;
        vx=abs(x-dx);
        vy=abs(y-dy);
        if((dx>8||dx<1)||(dy>8||dy<1)){
        std::cout<<"The coordinates you have entered are invalid."<<std::endl;
        }
    else if((y==dy)&&(x==dx)){
        std::cout<<"You have not moved."<<std::endl;
    }
    else if(piece=="knight"){
                        if(((vx!=2)&&(vy!=2))||((vy!=1)&&(vx!=1))){
        std::cout<<"The coordinates you have entered are invalid."<<std::endl;
    }
                        else if(((vx==2)&&(vy==2))||((vx==1)&&(vy==1))){
        std::cout<<"The coordinates you have entered are invalid."<<std::endl;
    }
                        else{
        std::cout<<"Your knight moved to x="<<dx<<" and y="<<dy<<"."<<std::endl;
    }
}
    else if(piece=="bishop"){
        if(vx!=vy){
            std::cout<<"The coordinates you have entered are invalid."<<std::endl;
        }
        else{
            std::cout<<"Your bishop moved to x="<<dx<<" and y="<<dy<<"."<<std::endl;  
        }
    }
    else if(piece=="pawn"){
        if((vx!=0)||((dy-y)!=1)){
           std::cout<<"The coordinates you have entered are invalid."<<std::endl; 
        }
        else{
            std::cout<<"Your pawn moved to x="<<dx<<" and y="<<dy<<"."<<std::endl;
        }
    }
    else if(piece=="king"){
    if((vy>1)||(vx>1)){
        std::cout<<"The coordinates you have entered are invalid."<<std::endl;
    }
    else{
        std::cout<<"Your king moved to x="<<dx<<" and y="<<dy<<"."<<std::endl;
    }
    }
    else if(piece=="rook"){
        if(((vx!=0)&&(vy!=0))){
            std::cout<<"The coordinates you have entered are invalid."<<std::endl;
        }
        else{
         std::cout<<"Your rook moved to x="<<dx<<" and y="<<dy<<"."<<std::endl;   
        }
    }
    else if(piece=="queen"){
        if(((vx==vy))){
         std::cout<<"Your queen moved to x="<<dx<<" and y="<<dy<<"."<<std::endl;   
        }
        else if(vx==0||vy==0){
            std::cout<<"Your queen moved to x="<<dx<<" and y="<<dy<<"."<<std::endl;
        }
        else{
           std::cout<<"The coordinates you have entered are invalid."<<std::endl; 
        }
    }

    }
}
}