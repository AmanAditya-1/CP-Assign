#include <stdio.h>

int main()
{

    int i, n, sum = 0;

    printf("Enter the value of n : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("Sum of %d natural numbers is %d.", n, sum);

    return 0;
}