//3.11 编程练习 4
#include<stdio.h>
int main(void)
{
    float shuru;
    printf("Enter a floating-point value:");
    scanf("%f",&shuru);
    printf("fixed-point notation: %f\n",shuru);
    printf("expponential notation: %e\n",shuru);
    printf("p notation: %a",shuru);//记住用%a 日后要加固

    getchar();
    return 0;
}