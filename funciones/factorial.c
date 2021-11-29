#include <stdio.h>

int factorial(int n);

int main()
{
    int res = factorial(5);
    printf("5!=%d", res);
}

int factorial(int n)
{
    int fact = 1;
    int i;

    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
