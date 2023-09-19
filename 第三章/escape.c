//escape.c -- 使用转移序列
#include<stdio.h>
int main(void)
{
    float salary;

    printf("Please enter your wanter salary below\n");
    printf("Your wanted salary is $______\b\b\b\b\b\b");
    scanf("%f",&salary);
    printf("\n\t$%.2f a month is $%.2f a year!",salary,salary*12);
    printf("\rGee!\n");

    getchar();
    getchar();
    return 0;
}