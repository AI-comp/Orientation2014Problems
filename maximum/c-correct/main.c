#include <stdio.h>

int main(void)
{
    int n, i, result;
    while (scanf("%d", &n), n)
    {
        int a[n];
        result = 0;
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            if (i >= 2)
            {
                if (a[i] < a[i - 1] && a[i - 1] > a[i - 2])
                {
                    result++;
                }
            }
        }
        printf("%d\n", result);
    }
}
