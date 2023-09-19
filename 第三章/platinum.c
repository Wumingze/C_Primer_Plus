/*platinum.c -- 将你的体重转化为同等重量白金并输出价格*/
#include<stdio.h>
int main(void)
{
    float weight; /*你的体重*/
    float value; /*同等质量的白金价值*/

    printf("Are you worth your weight in platinum?\n");
    printf("Let us check it out!");
    printf("Please enter your weight in pounds:");

    /*获取用户的输入*/
    scanf("%f", &weight);
    /*假设白金的价格是每盎司$1700*/
    /*14.5833用于把英镑常衡盎司转化为金衡盎司*/
    value = weight * 14.5833 * 1700;
    printf("Your weight in platium is worth $%.2f", value);

    getchar();
    getchar();
    return 0;

}