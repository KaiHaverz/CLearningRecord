#include<iostream>
using namespace std;

const double RATE=8;
const int STANDARD=40;


int main(){
    double salary=0.0;
    int hours;
    cout<<"请输入您这周工作的小时数：";
    cin>>hours;

    if(hours<STANDARD){
        salary=hours*RATE;
    }
    else{
        salary=STANDARD*RATE+(hours-STANDARD)*RATE*1.5;
    }

    cout<<"你这周的工资是："<<salary<<endl;

    return 0;
}