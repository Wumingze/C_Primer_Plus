//praise1.c-- 使用不同类型得字符串
#include<stdio.h>
#define PRAISE "Your are an extraordinary being."

int main(void)
{
    char name[40];

    printf("What's your name?");
    scanf("%s",name);
    printf("Hello,%s,%s",name,PRAISE);

    getchar();
    return 0;
}