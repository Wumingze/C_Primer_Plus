//rules.c --优先级测试
#include<stdio.h>
int main(void)
{
    int a;
    a = -(2+5)*6+(4+3*(2+3));
    printf("%d",a);

    return 0;
}