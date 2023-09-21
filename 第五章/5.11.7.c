//5.11 编程练习 7(???double不可用，gcc8？)
#include<stdio.h>
void test(double n)
{   
    printf("\n%f",n);
    printf("\n%f",n*n*n);
}
int main()
{
    printf("Please enter a double number:");
    double a;
    scanf("%f",&a);
    test(a);
    return 0;
}