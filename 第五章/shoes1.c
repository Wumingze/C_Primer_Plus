//shoes1.c--把鞋码转换成英寸
#include<stdio.h>
#define ADJUST 7.31
int main()
{
    const double SCALE = 0.333;
    double shoe,foot;

    shoe = 9.0;
    foot = shoe*SCALE+ADJUST;
    printf("Shoe size (man's)     foot length.\n");
    printf("%10.1f %15.2f inches\n",shoe,foot);

    return 0;
}