//3.11 编程练习 6
#include<stdio.h>
int main(void)
{
    float kuatuo;
    float shuliang;

    printf("Please input your mount of kuatuo:");
    scanf("%f",&kuatuo);
    shuliang = kuatuo*950*1e23/3;
    printf("the mount of water fenzi is: %e",shuliang);

    getchar();
    return 0;
}