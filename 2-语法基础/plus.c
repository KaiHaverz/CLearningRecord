#include<stdio.h>

int main(){
    printf("这是一个加法计算器，计算两个数字的和，请输入两个整数(中间用空格隔开):");
    int a,b;
    //注意&
    scanf("%d %d",&a,&b);
    printf("%d+%d=%d",a,b,a+b);

    return 0;
}