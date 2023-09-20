//praise2.c
#include<stdio.h>
#include<string.h>
#define PRAISE "Your are an extraordinary being."

int main(void)
{
    char name[40];
    int letter1,letter2,memory1,memory2;

    printf("What's your name?");
    scanf("%s",name);
    printf("Hello,%s,%s",name,PRAISE);
    
    letter1 = strlen(name);
    memory1 = sizeof(name);
    letter2 = strlen(PRAISE);
    memory2 = sizeof(PRAISE);

    printf("\nYour name of %d letters occupies %d memory cells.\n",letter1,memory1);
    printf("The praise of PRAISE has %d letters and occupies %d memory cells.",letter2,memory2);

    getchar();
    return 0;
}