#include<iostream>
using namespace std;

//cm 转化为 foot inch
int main(){
    int cm;
    cin>>cm;

    int foot = cm/30.48;
    int inch = (cm/30.48 - foot)*12;

    cout<<foot<<" "<<inch<<endl;

    return 0;
}