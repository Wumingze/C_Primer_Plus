// 5.11 编程练习 4
#include <stdio.h>
#define I_PER_CM 2.54

int main()
{
    float a;
    printf("Enter a height in centimeters:");
    scanf("%f", &a);

    while (a > 0)
    {
        float b;
        float c;
        float d;
        b = a / I_PER_CM;
        c = (int)b / 12;
        d = b - c*12;

        printf("\n%.1f cm = %.0f feet , %.1f inches.",a,c,d);
        printf("\nEnter a height in centimeters(<=0 to quit):");
        scanf("%f", &a);
    }
    printf("\nbye!");
    return 0;
}