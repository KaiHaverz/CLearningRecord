#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"请输入若干个整数（序列以-1结尾），我来帮你求他们的平均值:";

    int count=0;
    int sum=0;

    //序列由-1结尾
    cin>>num;
    do{
        sum+=num;
        count++;
        cin>>num;
    }while(num!=-1);

    //乘一个1.0，转化为浮点数的➗
    cout<<"average="<<1.0*sum/count<<endl;

    return 0;
}