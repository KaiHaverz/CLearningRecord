#include <iostream>
using namespace std;

int maxCommonDivisor(int a,int b){
    while(b!=0){
        int temp=a%b;
        a=b;
        b=temp;
    }
    return a;
}

//int main(){
//    int a,b;
//    cin>>a>>b;
//    cout<< maxCommonDivisor(a,b)<<endl;
//
//    return 0;
//}