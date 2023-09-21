// 5.11 编程练习 9(const有用？double失效)
#include <stdio.h>
void Temperatures(float huashi)
{
    float sheshi, kaishi;
    const float s_to_k = 273.16;
    sheshi = 5.0 / 9.0 * (huashi - 32.0);
    kaishi = sheshi + s_to_k;
    printf("\nhuashiwenduwei:%.2f ℉ sheshiwendu: %.2f ℃ kaishiwendu:%.2f K", huashi, sheshi, kaishi);
}

int main()
{
    printf("\nPlease enter a huashiwendu:");
    float a;
    int b = scanf("%f",&a);
    while (b == 1)
    {
        Temperatures(a);
        printf("\nPlease enter a huashiwendu:");
        b = scanf("%f",&a);
    }
}