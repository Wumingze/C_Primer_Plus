#include<stdio.h>

int main()
{
    int shuru;
    scanf("%d",&shuru);
    if (shuru<=0);
    else
    {
        int sushu[2048];
        int k=0,j=0;
        for (int i = 1; i <= shuru; i++)
        {
            
            for (int h = 1; h*h <= i; h++)
            {
                j = 0;
                if (i%h==0)
                {
                    j++;
                }
                else;
                if (j==1)
                {
                sushu[k]=h;
                k++;
                }
            }
            
            
        }
        for (int i = 0; i < k; i++)
        {
            printf("%d ",sushu[i]);
        }
        

    }
    
}