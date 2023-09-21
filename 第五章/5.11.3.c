// 5.11 编程练习 3
#include <stdio.h>
int main()
{
    printf("Please input the number of days below:\n");
    int a;
    scanf("%d", &a);

    while (a > 0)
    {
        int w, d;
        w = a / 7;
        d = a % 7;
        printf("\n%d days are %d weeks,%d days\n",a,w,d );
        printf("Please input the number of days below:\n");
        scanf("%d", &a);
    }
    printf("\n finish!");
    return 0;
}