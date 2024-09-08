#include<iostream>
using namespace std;

int main(){
    double regularGrades,finalGrades;
    cout<<"请输入你的平时成绩和期末成绩:";
    cin>>regularGrades>>finalGrades;

    cout<<"你的期末总成绩是"<<regularGrades*0.4+finalGrades*0.6<<endl;

    return 0;
}