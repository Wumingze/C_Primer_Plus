/*right.c --已经修复语法错误的程序*/
#include<stdio.h>
int main(void)
{
    int n, n2, n3;

    /*该程序有多处错误，但在此处已经完全修复*/
    n = 5;
    n2 = n * n;
    n3 = n * n2;
    printf("n = %d,n squared = %d,n cubed = %d \n", n, n2, n3);

    getchar();
    return 0;
}