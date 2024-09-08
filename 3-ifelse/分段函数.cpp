#include<iostream>
using namespace std;

int f(int x){
    int y;
    if(x<0){
        y=-1;
    }
    else if(x==0){
        y=0;
    }
    else{
        y=2*x;
    }
    return y;
}

int main(){
    int x;
    cout<<"请输入x的值：";
    cin>>x;
    cout<<"f(x)="<<f(x)<<endl;

    return 0;
}