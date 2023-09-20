//4.8 编程练习 7
#include<stdio.h>
#include<float.h>
int main()
{
    printf("The value of FLT_DIG is %d",FLT_DIG);
    printf("\nThe value of DBL_DIG is %d",DBL_DIG);
    double a = 1.0/3.0;
    float b = 1.0/3.0;
    printf("\na=%lf,%.12lf,%.16lf",a,a,a);
    printf("\nb=%f,%.12f,%.16f",b,b,b);

    return 0;
}