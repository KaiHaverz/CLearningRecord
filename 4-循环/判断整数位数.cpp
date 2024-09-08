#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int a;
    a=pow(2,100);
    int count=0;

    while(a!=0){
        a/=10;
        count++;
    }

    cout<<"2**100"<<"是"<<count<<"位数"<<endl;

    return 0;
}