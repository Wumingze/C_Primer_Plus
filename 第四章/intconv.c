//intconv.c--一些不匹配的整型转换
#include<stdio.h>
#define PAGES 336
#define WORDS 65618

int main()
{
    short num = PAGES;
    short mnum = -PAGES;
    printf("num short and int :%hd %d",num,num);
    printf("\n-num int and unsigned short :%d %hu",mnum,mnum);
    printf("\n WORDS in int short and char: %d %hd %c",WORDS,WORDS,WORDS);

    return 0;
}