#include <stdio.h>

int main()
{
    char a;
    scanf("%c", &a);
    char b;
    b = a - 64;
    int c = (int)b;
    int d = c;
    

    for (int i = 0; i < b; i++)
    {
        for (int e = 0; e < d - 1; e++)//空格ok
        {
            printf(" ");
        }

        char zimu[26];//数组
        char z;
        z = a;
        for (int y = c; y > 0; y--)
        {
            zimu[y] = z;
            z = z - 1;
        }
        
        for (int h = 0; h <= i+1; h++)
        {
            printf("%c",zimu[h]);
        }

        for (int g = 0; g < i+1; g++)
        {
            printf("%c",zimu[i-g]);
        }
        
        
        printf("\n");

        d -= 1;
    }
    return 0;
}