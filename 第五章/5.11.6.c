//5.11 编程练习 5
//addemup.c -- 几种常见的语句
#include<stdio.h>
int main(void)
{
    int count,sum;

    count = 0;
    sum = 0;
    printf("有钱佬，输入你赚钱的天数：");
    int days;
    scanf("%d",&days);
    while (count++<days)
    {
        sum = sum+count*count;
    }
    printf("\nsum = %d",sum);

    return 0;
}