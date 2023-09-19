//3.11 编程练习 5
#include<stdio.h>
int main(void)
{
    float nianling;
    float miaoshu;
    printf("Hey!Man.Please input your age in there:");
    scanf("%f",&nianling);
    miaoshu = nianling * 3.156e7;
    printf("You have lived for %f seconds!",miaoshu);

    getchar();
    return 0;
}