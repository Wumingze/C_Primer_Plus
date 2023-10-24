#include<stdio.h>

int main()
{
    int n,sum=0,sum1=0,m;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        sum = sum + 1/i;
    }
    for (int i = 0; i <=n; i++)
    {
        if (i%2==0)
        {
            m = -1;
        }
        if (i%2!=0)
        {
            m = 1;
        }
        
        sum1 = sum1 + (1/i)*m;
    }
    printf("%d",sum+sum1);
    return 0;
}