//5.11 编程练习 7
#include<stdio.h>
void test(double n)
{   
    printf("\n%lf",n);
    printf("\n%lf",n*n*n);
}
int main()
{
    printf("Please enter a double number:");
    double a;
    scanf("%lf",&a);
    test(a);
    return 0;
}