#include<iostream>
using namespace std;

int main(){
    int bill,price;
    printf("请输入您的商品金额:");
    scanf("%d",&price);
    printf("请掏出您的票子:");
    scanf("%d",&bill);
    int bill1=0;

    if(price>bill){
        printf("你掏出来的票子太小了，多给点,您还需要给%d元\n",price-bill);
        printf("请再加一些票子：");
        scanf("%d",&bill1);
    }

    printf("OK了，我应该找您%d元",bill+bill1-price);

    return 0;
}