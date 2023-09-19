/*altnames.c--可移植整数类型名*/
#include<stdio.h>
#include<inttypes.h>
int main(void)
{
    int32_t me32; //定义32位有符号整型变量
    
    me32 = 45933945;
    printf("Screen it without appointing that is a 32bytes int\n");
    printf("%d\n",me32);
    printf("Screen it with PRId32\n");
    printf("%"PRId32"",me32);

    getchar();
    return 0;
}