//2.12 编程练习 8
#include<stdio.h>
int main()
{
    printf("starting now:\n");
    one_three();
    printf("done!");

    getchar();
    return 0;
}

void one_three(void)
{
    printf("one\n");
    two();
    printf("three\n");
}

void two(void)
{
    printf("two\n");
}