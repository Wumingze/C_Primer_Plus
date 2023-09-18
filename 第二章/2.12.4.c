/*2.12 编程练习 4*/
#include<stdio.h>
void jolly(void)
{
    printf("For he's a jolly good fellow!\n");
}

void deny(void)
{
    printf("Which nobody can deny!\n");
}

int main(void)
{
    jolly();
    jolly();
    jolly();
    deny();

    getchar();
    return 0;
}