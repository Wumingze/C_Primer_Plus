#include<stdio.h>
#include<string.h>

int main()
{
    int shuzu[255];
    int os[255],js[255];
    int oushu=0,jishu=0;
    scanf("%d",&shuzu[0]);
    for (int i = 0; shuzu[i]!=0; i++)
    {
        scanf("%d",&shuzu[i+1]);
        if ((int)(shuzu[i])%2==0&&shuzu[i]!=0)
        {
            os[oushu]=shuzu[i];
            oushu++;
        }
        if ((int)(shuzu[i])%2!=0) 
        {
            js[jishu]=shuzu[i];
            jishu++;
        }
        
        
    }
    float opingjun=0,jpingjun=0;
    int ozonghe=0,jzonghe=0;
    for (int i = 0; i < oushu; i++)
    {
        ozonghe=ozonghe+os[i];
    }
    for (int i = 0; i < jishu; i++)
    {
        jzonghe=jzonghe+js[i];
    }
    opingjun=ozonghe/(float)oushu;
    jpingjun=jzonghe/(float)jishu;
    printf("偶数数：%d    偶数平均数：%f     奇数数：%d       奇数平均数：%f       ",oushu,opingjun,jishu,jpingjun);
    return 0;
}