#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int a;
    cin>>a;
    int count=0;

    do{
        a/=10;
        count++;
    }
    while(a>0);


    cout<<"a是"<<count<<"位数"<<endl;

    return 0;
}