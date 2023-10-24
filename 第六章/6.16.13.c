#include<stdio.h>
int main()
{
    int shuzu[8];
    int a = 2;
    for (int i = 0; i < 8; i++)
    {
        shuzu[i] = a;
        a = a*2;
    }
    int h = 0;
    do
    {
        printf("%d\n",shuzu[h]);
        h = h+1;
    } while (h != 7);
    return 0;
    
}