#include <stdio.h>

int main(){
    int a,b,c,d;

    // 输入的时候一定要注意中间的逗号
    scanf("%d , %d",&a,&b);
    printf("%d,%d\n",a,b);

    //末尾还要一个空格
    scanf("%d,%d ",&c,&d);
    printf("%d  %d\n",c,d);

    return 0;
}
