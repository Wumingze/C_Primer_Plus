// 5.11 编程练习 1
#include <stdio.h>
#define M_PER_H 60

int main()
{
    int shuru;
    int h, m;

    printf("Now,please enter the number of minute(>0) in following:");
    scanf("%d", &shuru);

    while (shuru > 0)
    {
        h = shuru / M_PER_H;
        m = shuru % M_PER_H;
        printf("\nIt can also be written in %d hours %d minutes.", h, m);
        printf("\nNow,please enter the another number of minute(>0) in following:");
        scanf("%d", &shuru);
    }

    printf("\nMaybe you don't need it now or input a wrong number so I quit.");
}