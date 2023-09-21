//add_one.c --递增：前缀与后缀
#include<stdio.h>
int main(void)
{
    int ultra = 0,super = 0;

    while (super++ < 5,ultra++ <5)
    {
        printf ("%3d %3d\n",super,ultra);
    }
    return 0;
}