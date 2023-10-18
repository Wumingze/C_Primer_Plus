#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter lower and upper integer limits:");
    scanf("%d %d", &a, &b);
    do
    {
        int sum = 0;
        for (int i = a; i <= b; i++)
        {
            sum = sum + i * i;
        }
        printf("The sums of the squares from %d to %d is %d", a*a, b*b, sum);
        printf("\nEnter next set of limits:");
        scanf("%d %d", &a, &b);

    } while ((a < b) != 0);
    printf("Done");
    return 0;
}