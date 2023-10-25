#include<stdio.h>
#define JBGZ 1000
#define JIABAN 1.5
#define SHUILV1 0.15
#define SHUILV2 0.2
#define SHUILV3 0.25


int main()
{
    int a;
    scanf("%d",&a);
    int b;
    if (a<=30)
    {
        b=a;
    }
    else b=30+JIABAN*(a-30);
    
    int gongzi;
    gongzi = JBGZ*b;
    int shuijin=0;
    if (gongzi<=300)
    {
        shuijin=gongzi*SHUILV1;
    }
    else if (gongzi<=450)
    {
        shuijin=300*SHUILV1+(gongzi-300)*SHUILV2;
    }
    else shuijin=300*SHUILV1+150*SHUILV2+(gongzi-450)*SHUILV3;
    
    int jingshouru;
    jingshouru=gongzi-shuijin;

    printf("工资总额：%d 税金：%d  净收入：%d",gongzi,shuijin,jingshouru);
    return 0;
}