//prntval.c--printf()的返回值
#include<stdio.h>
int main()
{
    int a = 212;
    int rv ;

    rv = printf("%d F is water's boiling point.\n",a);
    printf("The printf() funtion printed %d characters.",rv);

    return 0;
}