#include<stdio.h>
#include<string.h>
int main()
{
    char danci[40];
    scanf("%s",danci);
    int h;
    h = strlen(danci);
    for (int i = h; i >= 0; i--)
    {
        printf("%c",danci[i]);
    }
    
    return 0;
}
