// 5.11 编程练习 2
#include <stdio.h>
int main()
{
    printf("Please enter a number:");
    int a;
    scanf("%d", &a);
    int b = a;

        while (b++ < a + 11)
    {
        printf("\n%d", b - 1);
    }
    return 0;
}