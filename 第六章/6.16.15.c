#include<stdio.h>

int main()
{
    char shuzu[255];
    int a;
    int i = 0;
    do
    {
        i++;
    } while (a = scanf("%c",&shuzu[i]));
    
        
    for (int b = i; b >= 0; b--)
    {
        printf("%c",shuzu[b]);
    }
    return 0;

}
