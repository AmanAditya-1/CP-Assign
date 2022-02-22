#include <stdio.h>

int main()
{

    int a, b, min, i;

    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);

    if (a > b)
        min = b;
    else
        min = a;

    for (i = min; i >= 1; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            printf("GCD of %d and %d is %d.", a, b, i);
            break;
        }
    }
    return 0;
}