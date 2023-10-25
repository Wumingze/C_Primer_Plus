#include <stdio.h>
#include <string.h>

int main()
{
    char shuzu[255];
    int i;
    for (i = 0; (shuzu[i] = getchar()) != '#'; i++)
        ;
    int a = i / 8;
    for (int b = 0; b < a; b++)
    {
        for (int c = b * 8; c < (b * 8 + 8); c++)
        {
            printf("%c ", shuzu[c]);
        }
        printf("\n");
        for (int c = b * 8; c < (b * 8 + 8); c++)
        {
            printf("%02d ", shuzu[c]);
        }
        printf("\n");
    }
    int e = i % 8 ;
    for (int d = 0; d < e; d++)
    {
        for (int f = 8*a; f < i; f++)
        {
            printf("%c ",shuzu[f]);
        }
        printf("\n");
        for (int f = 8*a; f < i; f++)
        {
            printf("%02d ",shuzu[f]);
        }
        
        
    }
    
}