#include <stdio.h>
int main()
{
    float a, b;
    scanf("%f %f", &a, &b);
    do
    {
        float c;
        c = a - b;
        float d;
        d = a * b;
        printf("%f\n", c * d);
    } while (scanf("%f %f", &a ,&b) == 2);
    return 0;
}