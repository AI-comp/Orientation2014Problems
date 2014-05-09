#include <stdio.h>

int main(void)
{
    int a, b, c, d, x;
    while (scanf("%d %d %d %d", &a, &b, &c, &d), (a | b | c | d))
    {
        for (x = -5; x < 6; x++)
        {
            printf("%d\n", a * x * x * x + b * x * x + c * x + d);
        }
    }
    return 0;
}
