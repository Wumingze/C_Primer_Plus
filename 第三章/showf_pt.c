//showf_pt.c--以两种方式显示float的值
#include<stdio.h>
int main(void)
{
    float aboat = 32000.0;
    double abet = 2.14e9;
    long double dip = 5.32e-5;

    printf("%f can be written %e\n",aboat,aboat);
    printf("It can also be written %a in hex.\n");
    printf("%f can be written %e.\n",abet,abet);
    printf("%Lf can be written %Le.\n",dip,dip); //GNU C Complier可能存在的问题？

    getchar();
    return 0;
}