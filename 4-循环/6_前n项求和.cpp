#include<iostream>
using namespace std;

int main(){
    int i=1;
    int n;
    cout<<"请输入计算到第几位:";
    cin>>n;
    double sum=0;

    int sign=1;
    for(i;i<=n;i++){
        sum+=sign*(1.0/i);
        sign*=-1;
        cout<<"第"<<i<<"次sum="<<sum<<endl;
    }

    cout<<"最终，前n项和为："<<sum<<endl;

    return 0;

}

// 1- 1/2 + 1/3 - 1/4 ....