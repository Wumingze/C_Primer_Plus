#include<stdio.h>
#include<string.h>
int main()
{
    char shuzu[255];
    int a;
    scanf("%s",shuzu);
    a = strlen(shuzu);
    for (int b = a-1; b >= 0; b--)
    {
        printf("%c",shuzu[b]);
    }
    return 0;

}
