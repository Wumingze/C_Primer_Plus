//badcount.c--参数错误的情况
#include<stdio.h>
int main(void)
{
    int n = 4;
    int m = 5;
    float f = 7.0f;
    float g = 8.0f;

    printf("%d,%d\n",n);
    printf("%d,%d\n",n,m,m);
    printf("%f,%f,%d",n,m,f);

    getchar();
    return 0;

}