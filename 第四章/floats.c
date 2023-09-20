// floats.c -- 一些浮点型修饰符的组合
#include <stdio.h>

int main(void)
{
    const double RENT = 3852.99;

    printf("*%f*\n", RENT);
    printf("*%e*\n", RENT);
    printf("*%.2f*\n", RENT);
    printf("*%.1f*\n", RENT);
    printf("*%10.3f*\n", RENT);
    printf("*%10e*\n", RENT);
    printf("*%+.2f*\n", RENT);
    printf("*%010.2f*", RENT);

    getchar();
    return 0;
}