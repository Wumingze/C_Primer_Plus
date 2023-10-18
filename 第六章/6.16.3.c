#include <stdio.h>

int main()
{
    char b;
    b = 'F';
    for (int i = 1; i <= 6; i++)
    {
        b = 'F';
        for (int a = 0; a < i; a++)
        {
            printf("%c", b);
            b = b - 1;
        }
        printf("\n");
    }
}