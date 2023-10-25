#include<stdio.h>

int main()
{
    char shuzu[255];
    int i=0,a=0,b=0;
    huilai:
    switch (shuzu[i]=getchar())
    {
    case '.':
        i++;
        a++;
        goto huilai;
    
    case '!':
        i++;
        b++;
        goto huilai;

    case '#':
        break;
    
    default:
        i++;
        goto huilai;
    
    }
    printf(".:%d !:%d",a,b);
}