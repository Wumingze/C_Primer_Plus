#include<stdio.h>

int main()
{
    char shuzu[255];
    int i=0;
    for (i = 0;((shuzu[i]=getchar())!='#'); i++);
    int b=0,c=0;
    for (int a = 0; a < i; a++)
    {
        if (shuzu[a]=='!')
        {
            b++;
        }
        if (shuzu[a]=='.')
        {
            c++;
        }
        
    }
    printf("%d %d",b,c);
    return 0;
}