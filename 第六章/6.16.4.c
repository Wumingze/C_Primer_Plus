#include <stdio.h>

int main()
{
    double shuzu1[8], shuzu2[8];
    for (int i = 0; i < 8; i++)
    {
        scanf("%lf", &shuzu1[i]);
    }

    for (int a = 0; a < 8; a++)
    {
        shuzu2[a] = 0;
        for (int b = 0; b <= a; b++)
        {
            shuzu2[a] = shuzu2[a] + shuzu1[b];
        }
        printf("%f\n", shuzu2[a]);
    }
    return 0;
}