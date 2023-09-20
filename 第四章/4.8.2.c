//4.8 编程练习 2(疑问较大 不能理解题意)
#include<stdio.h>
int main()
{
    printf("Please input your first name:\n");
    char name[40];
    scanf("%s",name);
    printf("\nPlease input your last name:\n");
    char lastname[40];
    scanf("%s",lastname);

    printf("Your first name is \"%s\" and your last name is \"%s\".\n",name,lastname);
    printf("\"%20s\"\"%20s\"\n",name,lastname);
    printf("\"%-20s\"\"%-20s\"\n",name,lastname);
    printf("   %s\n",name);
    printf("   %s",lastname);
    return 0;
}