#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Please input a integer,I'll rotate this number:";
    cin>>num;

    int digit;
    int ret=0;

    // 输出中间过程，方便之后检查
    while(num!=0){
        digit=num%10;
        ret=ret*10+digit;
        cout<<"num="<<num<<",digit="<<digit<<",ret="<<ret<<endl;
        num/=10;
    }

    cout<<"Finally,ret="<<ret<<endl;

    return 0;
}