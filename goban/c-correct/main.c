#include <stdio.h>

int main(void)
{
    int n, i, j, x, y;
    int dp[5][5];
    while (1)
    {
        scanf("%d", &n);
        if (n == -1)
        {
            break;
        }
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 5; j++)
            {
                dp[i][j] = 0;
            }
        }
        for (i = 0; i < n; i++)
        {
            scanf("%d %d", &x, &y);
            dp[x - 1][y - 1] = -1;
        }
        dp[0][0] = 1;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 5; j++)
            {
                if (dp[i][j] != -1)
                {
                    if (i > 0 && dp[i - 1][j] != -1)
                    {
                        dp[i][j] += dp[i - 1][j];
                    }
                    if (j > 0 && dp[i][j - 1] != -1)
                    {
                        dp[i][j] += dp[i][j - 1];
                    }
                }
            }
        }
        printf("%d\n", dp[4][4]);
    }
    return 0;
}
