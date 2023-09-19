//3.11 编程练习 1
#include<stdio.h>
int main(void)
{
    //整数上溢
    int a = 123456789012345;
    printf("平方1次: %d\n",a*a);
    printf("立方1次: %d",a*a*a);
    getchar();
    
    //浮点数上溢
    float b = 3.1415926535e24;
    printf("平方1次: %f;%e\n",b*b,b*b);
    printf("立方1次: %f;%e",b*b*b,b*b*b);
    getchar();   
    
    //浮点数下溢
    float c =3.1415926535e-4;
    printf("除十1次: %f;%e\n",c/10,c/10);
    printf("除十2次: %f;%e",c/100,c/100);
    getchar(); 
    
    return 0;
}