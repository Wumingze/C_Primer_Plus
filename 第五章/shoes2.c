//shoes2.c--计算多个不同鞋码对应的脚长
#include<stdio.h>
#define ADJUST 7.31
int main()
{
    const double SCALE = 0.333;
    double shoe,foot;

    printf("Shoe size (man's)     foot length.\n");
    shoe = 3.0;
    while (shoe < 18.5)
    {
        foot = shoe*SCALE+ADJUST;
        printf("%10.1f %15.2f inches\n",shoe,foot);
        shoe = shoe + 1;
    }
    
    printf("If the shoes fits,wear it.\n");
    return 0;
}