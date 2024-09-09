#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main(){
    srand(time(0));
    int a=rand()%100;

//    cout<<a<<endl;
    int count=0;// 次数
    int num;//用户输入
    do{
        cout<<"请输入一个 1-100 之间的正整数：";
        cin>>num;
        if(num>a){
            cout<<"你输入的数字太大了!"<<endl;
        }
        else if(num<a){
            cout<<"你输入的数字太小了!"<<endl;
        }
        count++;
    }while(a!=num);

    cout<<"Great! You only takes "<<count<<" times to reach the final correct answer!"<<endl;

    return 0;
}