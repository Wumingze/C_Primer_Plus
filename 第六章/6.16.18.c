#include<stdio.h>

int main()
{
    int i=5;
    int a=1;
    do    
    {
        i = 2*(i-a);
        printf("week:%-09d friends:%d\n",a,i);
        a++;
    }while (2*(i-a)<=150);
    
}