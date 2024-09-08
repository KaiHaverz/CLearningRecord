#include<iostream>
using namespace std;

int main(){
    int type;
    cin>>type;

    switch(type)
    {
        case 1:
            cout<<"哈麻批"<<endl;
            break;
        case 2:
            cout<<"宝批龙"<<endl;
            break;
        case 3:
            cout<<"瓜娃子"<<endl;
            break;
        case 4:
            cout<<"日龙包"<<endl;
            break;
        case 5:
            cout<<"傻逼"<<endl;
            break;
        default:
            cout<<"安？"<<endl;
            break;
    }

    return 0;
}