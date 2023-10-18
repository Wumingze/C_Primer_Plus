#include<stdio.h>

int main()
{
    int up=0,down=0;
    scanf("%d %d",&up,&down);
    for (int i = up; i <= down; i++)
    {
        int sum;
        sum = i;
        int sum2,sum3;
        sum2 = sum * i;
        sum3 = sum2 * i;
        printf("%5d %5d %5d\n",sum,sum2,sum3);
    }
    
    return 0;
}