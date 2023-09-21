//varwid.c -- 使用变宽输出字段
#include<stdio.h>
int main(void)
{
    unsigned width,precision;
    int number = 256;
    double weight = 242.5;
    printf("Enter a fleid width:\n");
    scanf("%d",&width);
    printf("The number is:%*d",width,number);
    printf("\nNow enter a width and precision:\n");
    scanf("%d %d",&width,&precision);
    printf("Weight = %*.*f",width,precision,weight);
    printf("\nDone!");

    return 0;

}