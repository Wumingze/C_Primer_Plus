// 5.11 编程练习 9(const有用？double失效)
#include <stdio.h>
void Temperatures(double huashi)
{
    double sheshi, kaishi;
    const double s_to_k = 273.16;
    sheshi = 5.0 / 9.0 * (huashi - 32.0);
    kaishi = sheshi + s_to_k;
    printf("\nhuashiwenduwei:%.2lf ℉ sheshiwendu: %.2lf ℃ kaishiwendu:%.2lf K", huashi, sheshi, kaishi);
}

int main()
{
    printf("\nPlease enter a huashiwendu:");
    double a;
    int b = scanf("%lf",&a);
    while (b == 1)
    {
        Temperatures(a);
        printf("\nPlease enter a huashiwendu:");
        b = scanf("%lf",&a);
    }
}