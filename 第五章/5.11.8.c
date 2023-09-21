// 5.11 编程练习 8
#include <stdio.h>
int main()
{
    int a, b;
    printf("This program computes moduli.\n");
    printf("Enter an integat to serve as the second operand:");
    scanf("%d", &b);
    printf("\nNow enter the first operand:");
    scanf("%d", &a);
//    printf("%d %% %d is %d", a, b, a % b);

    while (a > 0)
    {
        printf("\n%d %% %d is %d", a, b, a % b);
        printf("\nEnter next number for first operand(<= 0 to quit):");
        scanf("%d", &a);
    }
    printf("Done");
    return 0;
}