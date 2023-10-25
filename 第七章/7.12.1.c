#include<stdio.h>
#include<string.h>

int main()
{
    char shuzu[255];
    int i;
    for ( i = 0; (shuzu[i]=getchar())!='#'; i++);
    int konggeshu=0,huanhangfu=0,qita=0;
    if (strlen(shuzu)!=1)
    {
        for (int a = 0; a <= strlen(shuzu); a++)
        {
            if (shuzu[a]==' ')
            {
                konggeshu++;
            }
            
        }
        for (int a = 0; a <= strlen(shuzu); a++)
        {
            if (shuzu[a]=='\n')
            {
                huanhangfu++;
            }
        qita = strlen(shuzu) - konggeshu - huanhangfu -1;
            
        }
        printf("空格：%d 换行：%d其他： %d",konggeshu,huanhangfu,qita);
        
    }
    else printf("无有效字符。");

    return 0;
}