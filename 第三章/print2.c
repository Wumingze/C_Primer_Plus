/*print2.c --更多printf()的特性*/
#include<stdio.h>
int main(void)
{
    unsigned int un = 3000000000; //int 为32位和short 为16位的系统
    short end = 200;
    long big = 65537;
    long long verybig = 12345678908642;

    printf("un = %u and not %d\n",un,un);
    printf("end = %hd and not %d\n",end,end);
    printf("big = %ld and not %d\n",big,big);
    printf("verybig = %lld and not %ld",verybig,verybig);

    getchar();
    return 0;
    
}
