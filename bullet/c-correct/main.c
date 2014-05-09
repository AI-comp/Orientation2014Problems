#include <stdio.h>

int main(void)
{
    int n, p, i, t, result;
    while (1)
    {
        scanf("%d %d", &n, &p);
        if ((n | p) == 0)
        {
            break;
        }
        result = 0;
        int stopped = 0;
        for (i = 0; i < n; i++)
        {
            scanf("%d", &t);
            if (p < t)
            {
                stopped = 1;
            } else if (!stopped) {
                result++;
                p -= t;
            }
        }
        printf("%d\n", result);
    }
    return 0;
}
