#include <stdio.h>
#define JIABAN 1.5
#define SHUILV1 0.15
#define SHUILV2 0.2
#define SHUILV3 0.25

int jisuanqi(int a, float JBGZ)
{
    int b;
    if (a <= 30)
    {
        b = a;
    }
    else
        b = 30 + JIABAN * (a - 30);

    float gongzi;
    gongzi = JBGZ * b;
    float shuijin = 0;
    if (gongzi <= 300)
    {
        shuijin = gongzi * SHUILV1;
    }
    else if (gongzi <= 450)
    {
        shuijin = 300 * SHUILV1 + (gongzi - 300) * SHUILV2;
    }
    else
        shuijin = 300 * SHUILV1 + 150 * SHUILV2 + (gongzi - 450) * SHUILV3;

    float jingshouru;
    jingshouru = gongzi - shuijin;

    printf("工资总额：%f 税金：%f  净收入：%f", gongzi, shuijin, jingshouru);
    return 0;
}

int caidan()
{
    for (int i = 0; i < 50; i++)
    {
        printf("*");
    }
    printf("\n\n");
    printf("Enter the number corresponding to the desired pay rate or action:\n");
    printf("1)$8.75/hr                                 2)$9.33/hr\n");
    printf("3)$10.00/hr                                4)$11.20/hr\n");
    printf("5)quit\n\n");
    for (int i = 0; i < 50; i++)
    {
        printf("*");
    }
    printf("\n");
    int a;
    scanf("%d", &a);
    return a;
}

int main()
{
    int dengji;
    dengji = caidan();
    printf("\n");
    int hour;
huilai:
    switch (dengji)
    {
    case 1:
        scanf("%d", &hour);
        jisuanqi(hour, 8.75);
        break;
    case 2:
        scanf("%d", &hour);
        jisuanqi(hour, 9.33);
        break;
    case 3:
        scanf("%d", &hour);
        jisuanqi(hour, 10.00);
        break;
    case 4:
        scanf("%d", &hour);
        jisuanqi(hour, 11.20);
        break;
    case 5:
        break;

    default:
        printf("\nPlease input again:");
        scanf("%d", &dengji);
        goto huilai;
    }
    return 0;
}