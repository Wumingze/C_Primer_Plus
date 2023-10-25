#include<stdio.h>

int main()
{
    char shuzu[255];
    int i,cishu=0;
    for (i = 0;((shuzu[i]=getchar())!='#'); i++);
    for (int a = 0; a < i-1; a++)
    {
        if (shuzu[a]=='e')
        {
            if (shuzu[a+1]=='i')
            {
                cishu++;
            }
            
        }
        
    }
    printf("%d",cishu);
    return 0;
}