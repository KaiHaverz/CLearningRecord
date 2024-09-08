#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"请输入三个整数的值:";
    cin>>a>>b>>c;

    int max=a;
    if(b>max){
        max=b;
        if(c>max){
            max=c;
        }
    }
    else{
        if(c>max){
            max=c;
        }
    }
    cout<<"最大的数是："<<max<<endl;

    return 0;

}