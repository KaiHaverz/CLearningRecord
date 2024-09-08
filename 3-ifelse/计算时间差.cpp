#include <iostream>
using namespace std;

int main(){
    int hour1,hour2,min1,min2;
    printf("请输入开始的时间：");
    scanf("%d:%d",&hour1,&min1);
    printf("请输入结束的时间：");
    scanf("%d:%d",&hour2,&min2);

    int ih=hour2-hour1;
    int im=min2-min1;

    //加断点调试看看？
    if(im<0){
        im=im+60;
        ih-=1;
    }

    printf("时间差:%d小时%d分钟",ih,im);

    return 0;
}