#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int hour1,min1,hour2,min2;
    cout<<"Please input hour1 min1: "<<endl;
    cin>>hour1>>min1;
    cout<<"Please input hour2 min2: "<<endl;
    cin>>hour2>>min2;

    int timeDif=abs((hour1*60+min1)-(hour2*60+min2));
    int hourDif=timeDif/60;
    int minDif=timeDif%60;

    cout<<"the Time Difference is "<<hourDif<<" hours and "<<minDif<<" mins"<<endl;

    return 0;
}