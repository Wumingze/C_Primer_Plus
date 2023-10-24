#include<stdio.h>
int main()
{
    int a = 100;
    int i;
    for (i = 1;a>0; i++)
    {
        a = a * 1.08 - 10; 
        if (a<=0)
        {
            printf("%d",i);
        }
               
    }
    return 0;
}