//print1.c -- 演示printf()的一些特性
#include<stdio.h>
int main(void)
{
    int ten = 10;
    int two = 2;

    printf("Now doing something right.\n");
    printf("%d minus %d is %d.\n",ten, two,ten - two);
    printf("Now doing something wrong.\n");
    printf("%d minus %d is %d.",ten);

    getchar();
    return 0;
}
