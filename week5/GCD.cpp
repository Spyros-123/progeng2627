#include<iostream>
int cdiv(int n1,int n2){
    int rem=1;
    while(rem!=0){
        rem=n1%n2;
        n1=n2;
        n2=rem;
    }
    return n1;
}
int tnt(int n){
    int counter=0;
    for(int i=1;i<n;i++){
        int m=cdiv(n,i);
        if(m==1){
            counter=counter+1;
        }
    }
    return counter;
}
int tntsum(int n3,int& d){
    int t=tnt(n3),i2=0,s=tnt(n3);
    while(t!=0){
        t=tnt(t);
        i2=i2+1;
        s=s+t;
    }
    d=i2;
    return s;
}
int slp(int k1,int k2,int& q){
    int depth,m=0,k;
    for(int i3=k1;i3<k2+1;i3++){
        k=tntsum(i3,depth);
     if(depth>m){
        m=depth;
        q=i3;
     }
    }
    return m;
}
int main(){
    int w1,w2,k;
    std::cin>>w1>>w2;
    std::cout<<"the local totient depth peak is "<<slp(w1,w2,k)<<" and occurs at "<<k<<std::endl;
}