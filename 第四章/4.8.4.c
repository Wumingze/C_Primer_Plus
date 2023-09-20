//4.8 编程练习 4
#include<stdio.h>
int main()
{
    printf("Please input your name:");
    char name [40];
    scanf("%s",name);
    printf("\nPlease input your hweiget(cm):");
    float hweight;
    scanf("%f",&hweight);
    printf("%s,you are %.2f m tall.",name,hweight/100);
    return 0;

}