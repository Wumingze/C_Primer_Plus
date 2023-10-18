#include <stdio.h>

void hanshu(float h,float i)
{
    do
    {
        float c;
        c = h - i;
        float d;
        d = h * i;
        printf("%f\n", c * d);
    } while (scanf("%f %f", &h, &i) == 2);
}
int main()
{
    float a, b;
    scanf("%f %f", &a, &b);
    hanshu(a, b);
    return 0;
}