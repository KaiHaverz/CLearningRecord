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

int minCommonMultiple(int a,int b){
    return (a*b)/ maxCommonDivisor(a,b);
}

//int main(){
//    int a,b;
//    cin>>a>>b;
//    cout<<"the min common multiple of a and b is: "<<minCommonMultiple(a,b)<<endl;
//
//    return 0;
//}