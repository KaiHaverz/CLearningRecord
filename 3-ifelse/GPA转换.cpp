#include<iostream>
using namespace std;

int main(){
    int score;
    cout<<"请输入你的分数：";
    cin>>score;
    double GPA=0.0;

    if(score>=90 && score<=100){
        GPA=4.0;
    }
    else if(score>=85 && score<=89){
        GPA=3.7;
    }
    else if(score>=82 && score<=84){
        GPA=3.3;
    }
    else if(score>=78 && score<=81){
        GPA=3.0;
    }
    else if(score>=75 && score<=77){
        GPA=2.7;
    }
    else if(score>=72 && score<=74){
        GPA=2.3;
    }
    else if(score>=68 && score<=71){
        GPA=2.0;
    }
    else if(score>=64 && score<=67){
        GPA=1.5;
    }
    else if(score>=60 && score<=63){
        GPA=1.0;
    }
    else if(score>=0 && score<=59){
        GPA=0.0;
    }

    cout<<"你这门课程的绩点是："<<GPA<<endl;

    return 0;
}