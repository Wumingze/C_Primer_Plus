// 3.11 编程练习 8
#include <stdio.h>
int main(void)
{
    float bei;
    float pintuo;
    float angsi;
    float tangshao;
    float chashao;

    printf("Please input the number of cups:");
    scanf("%f", &bei);

    pintuo = 0.5 * bei;
    angsi = 8 * bei;
    tangshao = 2 * angsi;
    chashao = 3 * tangshao;

    printf("Your cups=%.2f pintuo,=%.2f angsi,=%.2f tangshao,=%.2f chashao", pintuo, angsi, tangshao, chashao);

    getchar();
    return 0;
}