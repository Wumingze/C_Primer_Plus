//4.8 编程练习 1
#include<stdio.h>
int main()
{
    printf("Please input your name like follow:\n");

    char name[40];
    char xing[40];
    printf("Your name is:");
    scanf("%s",name);
    printf("\nYour last name is:");
    scanf("%s",xing);

    getchar();
    printf("OK.%s,%s,We have receive your name and print it.",name,xing);
    //printf("%s,%s",name,xing);

    return 0;
}