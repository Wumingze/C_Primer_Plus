//2.12 编程练习 5
#include<stdio.h>
int main(void)
{
    br();
    printf(",");
    ic();
    printf("\n");
    ic();
    printf(",\n");
    br();

    getchar();
    return 0;
}

void br(void)
{
    printf("Brazil,Russia");
}

void ic(void)
{
    printf("India,China");
}