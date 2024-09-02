#include <iostream>
using namespace std;

int main(){
    cout<<"Please input your height，Foot and Inch:";

    // 这里一定要用 double
    double foot,inch;
    cin>>foot>>inch;

    // 用 12.0
    double height=(foot+inch/12.0)*0.3048;
    cout<<"Your Height in meters is: "<<height<<"m"<<endl;

    return 0;
}
