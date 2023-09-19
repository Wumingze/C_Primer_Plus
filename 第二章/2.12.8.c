//2.12 编程练习 8
#include<stdio.h>

void two(void)
{
    printf("two\n");
}


void one_three(void)
{
    printf("one\n");
    two();
    printf("three\n");
}


int main()
{
    printf("starting now:\n");
    one_three();
    printf("done!");

    getchar();
    return 0;
}