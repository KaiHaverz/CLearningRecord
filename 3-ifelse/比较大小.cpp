#include<iostream>
using namespace std;

int main(){
    cout<<"请输入两个整数，用来比较大小:";
    int a,b;
    cin>>a>>b;

    int max=a;
    if(max<b){
        max=b;
    }

    printf("%d更大", max);

    return 0;
}