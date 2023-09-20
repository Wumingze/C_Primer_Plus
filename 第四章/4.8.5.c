//4.8 编程练习 5
#include<stdio.h>
int main()
{
    printf("Please input the size of the downloading file:");
    float a;
    scanf("%f",&a);
    printf("\nPlease input the download speed of your computer:");
    float b;
    scanf("%f",&b);
    printf("At %.2f megabits per second,a file of %.2f megabytes\ndownloads in %0.2f seconds.",b,a,a/b*8);
    return 0;
}