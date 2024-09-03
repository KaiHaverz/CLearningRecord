#include<iostream>
using namespace std;

int main(){
    int startTime,duringTime;
    cout<<"请输入开始的时刻和经过的分钟数：";
    cin>>startTime>>duringTime;

    startTime=(startTime/100)*60+startTime%100;
    int endTime=startTime+duringTime;
    int endHour=endTime/60;
    int endMin=endTime%60;
    cout<<"经过"<<duringTime<<"分钟之后是"<<endHour<<"点"<<endMin<<"分。"<<endl;

    return 0;
}