#include<iostream>
using namespace std;

// 不适用于末尾为0的数字
int rotate(int n){
    int temp=0;
    while(n>0){
        temp=temp*10+n%10;
        n/=10;
    }
    return temp;
}

void seperate(int n){
    while(n>0){
        cout<<n%10;
        if(n>=10){
            cout<<" ";
        }//保证最后一位没有空格
        n/=10;
    }
}

int main(){
    //先翻转数字，然后再拆分
    int n;
    cin>>n;

    seperate(rotate(n));

    return 0;
}