//3.11 编程练习 7
#include<stdio.h>
int main(void)
{
    float yingcun;
    float limi;
    printf("Please input your ench hwight:");
    scanf("%f",&yingcun);
    limi = yingcun*2.54;
    printf("You are %.2f cm tall",limi);

    getchar();
    return 0;
}