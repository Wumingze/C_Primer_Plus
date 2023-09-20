//talkback.c -- 演示与用户交互
#include<stdio.h>
#include<string.h> //提供strlen（）函数原型
#define DENSITY 62.4
int main(void)
{
    char name[40];
    float weight,cubic_feet;
    int letter,bytes;
    
    printf("Hi! What's your frist name?\n");
    scanf("%s",name);
    printf("%s,what's your weight in pounds?\n");
    scanf("%f",&weight);

    cubic_feet = weight / DENSITY;
    letter = strlen(name);
    bytes = sizeof(name);

    printf("Well,%s,your volume is %2.2f cubic feet.\n",name,cubic_feet);
    printf("Also,your first name has %d letters.\n",letter);
    printf("and we have %d bytes to store it.\n",bytes);

    getchar();
    getchar();
    return 0;
}