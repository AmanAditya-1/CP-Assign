#include <stdio.h>

int main()
{

    int a = 0, b = 1, fib, i, n;
    printf("Enter the value of n : ");
    scanf("%d", &n);

    if (n == 1)
    {
        printf("The term is %d", a);
    }
    else if (n == 2)
    {
        printf("The term is %d", b);
    }
    else
    {
        for (i = 3; i <= n; i++)
        {
            fib = a + b;
            a = b;
            b = fib;
        }
        printf("The term is %d", fib);
    }

    return 0;
}