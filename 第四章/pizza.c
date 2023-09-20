//pizza.c --在披萨饼程序中使用已定义的常量
#include<stdio.h>
#define PI 3.1415926535

int main(void)
{
    float r,c,s;
    printf("What is the radius of your pizza?\n");
    scanf("%f",&r);
    getchar ();

    c = PI*2*r;
    s = PI*r*r;

    printf("Your basic pizza parameters are as follow:\n");
    printf("circunference= %1.2f , area = %1.2f",c,s);

    getchar();
    return 0;
}