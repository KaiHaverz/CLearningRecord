#include<iostream>
using namespace std;

void hanoi(int n,char from_rod,char to_rod,char aux_rod){
    if(n==1){
        cout<<"move dish 1 from "<<from_rod<<" to the "<<to_rod<<endl;
        return ;
    }
    hanoi(n-1,from_rod,aux_rod,to_rod);
    cout<<"move dish "<<n<<" from "<<from_rod<<" to the "<<to_rod<<endl;
    hanoi(n-1,aux_rod,to_rod,from_rod);
}

int main(){
    int n;
    cout<<"Please input the number of the dishes:";
    cin>>n;

    hanoi(n,'A','B','C');

    return 0;
}