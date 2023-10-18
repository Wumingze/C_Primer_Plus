#include <stdio.h>

int main()
{
    char a;
    a = 'A';
    for (int i = 1; i <= 6; i++)
    {
        for (int b = 0; b < i; b++)
        {
            printf("%c", a);
            a = a + 1;
        }
        printf("\n");
    }
    return 0;
}