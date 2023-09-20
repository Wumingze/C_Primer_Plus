//4.8 编程训练 8
#include<stdio.h>
#define E_KM 1.609
#define CL_L 3.785
int main()
{
    printf("Hi!\nYou have travelled for ______ 英里.\b\b\b\b\b\b\b\b\b\b");
    float e;
    scanf("%f",&e);
    printf("\nAnd you have comsumed ______ l l加仑.\b\b\b\b\b\b\b\b\b\b\b\b\b");
    float jialun;
    scanf("%f",&jialun);

    printf("\n欧洲标准： %.1f 英里/加仑",e/jialun);
    float a = e/jialun;
    float b = 1/a*CL_L/E_KM;
    printf("\n美国标准： %.1f 升/100公里",b);

    return 0;
}