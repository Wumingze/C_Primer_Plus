//sizeof.c--使用sizeof运算符
#include<stdio.h>
int main()
{
    int n = 0;
    size_t intsize;

    intsize = sizeof(int);
    printf("n = %d,n has %zd bytes;all ints have %zd bytes.\n",
    n,sizeof n,intsize);

    return 0;
}