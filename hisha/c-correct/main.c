#include <stdio.h>

int main(void)
{
    int n, i, result = 1;
    while (scanf("%d", &n), n)
    {
        result = 1;
        for (i = 1; i <= n; i++)
        {
            result *= i;
            result %= 2014;
        }
        printf("%d\n", result);
    }
}
