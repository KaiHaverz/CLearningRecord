#include <iostream>
using namespace std;

void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

int main(){
    cout<<"Please input a and b: "<<endl;
    int a,b;
    cin>>a>>b;
    swap(a,b);
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;

    return 0;
}