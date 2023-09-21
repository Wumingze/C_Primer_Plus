//skip2.c -- 跳过输入中的前两个整数
#include<stdio.h>
int main(void)
{
    int n;
    printf("Please enter 3 number in following:\n");
    scanf("%*d %*d %d",&n);
    printf("The last number you entered is %d",n);
    return 0;

}