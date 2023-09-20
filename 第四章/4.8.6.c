//4.8 编程练习 6
#include<stdio.h>
#include<string.h>
int main()
{
    printf("Please input your first name and last name.\n");
    printf("Your first name is:");
    char fname[20];
    scanf("%s",fname);
    printf("\nYour last name is:");
    char lname[20];
    scanf("%s",lname);

    int fletter,lletter;
    fletter = strlen(fname);
    lletter = strlen(lname);

    printf("%10s %10s",fname,lname);
    printf("\n%10d %10d",fletter,lletter);
    printf("\n%-10s %-10s",fname,lname);
    printf("\n%-10d %-10d",fletter,lletter);

    return 0;
}