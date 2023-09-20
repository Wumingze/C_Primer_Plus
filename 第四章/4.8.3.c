//4.8 编程练习 3
#include<stdio.h>
int main()
{
    printf("Please input a float number:");
    float a;
    scanf("%f",&a);
    printf("small number:%.1f,e number:%.1e",a,a);
    printf("small number:%+.3f,e number:%.3e",a,a);
    return 0;
}