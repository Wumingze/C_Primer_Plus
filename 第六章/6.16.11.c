#include <stdio.h>
#include <string.h>
int main()
{
    int shuzi[400];
    for (int i = 0; i < 8; i++)
    {
        scanf("%d ", &shuzi[i]);
    }

    for (int b = 7; b >= 0; b--)
    {
        printf("%d", shuzi[b - 1]);
    }
    return 0;
}