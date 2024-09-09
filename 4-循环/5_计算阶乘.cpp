#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"请输入一个整数，我来帮你计算他的阶乘：";
    cin>>n;

    long int fact=1;
    int i=1;
    for(i=1;i<=n;i++){
        cout<<"i="<<i;
        cout<<",fact="<<fact<<"*"<<i<<"=";
        fact*=i;
        cout<<fact<<endl;
    }

    cout<<"So,"<<n<<"!="<<fact<<endl;

    return 0;
}