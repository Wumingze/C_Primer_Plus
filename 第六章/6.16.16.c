#include<stdio.h>

int daphne(int a)
{
    return (a = a * 0.1);
}

int deirdre(int a)
{
    return (a = a * 0.05);
}

int main()
{
    int b;
    int a = 100;
    b = 100;
    for (int i = 0;b<=a; i++)
    {
        a = a + daphne(100);
        b = b + deirdre(b);
    }
    printf("daphne:%d deirdre:%d",a,b);
    return 0;
}
    
