// typesize.c-- 打印类型大小
#include <stdio.h>
int main(void)
{
    // C99提供%zd转换声明
    printf("Type int has a size of %zd btyes.\n", sizeof(int));
    printf("Type char has a size of %zd btyes.\n", sizeof(char));
    printf("Type long has a size of %zd btyes.\n", sizeof(long));
    printf("Type long long has a size of %zd btyes.\n", sizeof(long long));
    printf("Type double has a size of %zd btyes.\n", sizeof(double));
    printf("Type long double has a size of %zd btyes.\n", sizeof(long double));

    getchar();
    return 0;
}