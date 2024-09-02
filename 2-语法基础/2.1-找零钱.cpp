#include <stdio.h>

const int AMOUNT=100;

int main(){
    int price;
    printf("请输入您的商品的价格:");
    scanf("%d",&price);

    int change=AMOUNT-price;
    printf("找您%d元，慢走！\n",change);

    return 0;
}
