#include <stdio.h>
#include <string.h>
int main()
{
    char shuzi[400];
    scanf("%s",shuzi);
    int a = strlen(shuzi);
    for (int b = a; b >= 0; b--)
    {
        printf("%c", shuzi[b-1]);
    }
    return 0;
}