#include <stdio.h>

int main() {
    while (1) {
        int n;
        scanf("%d", &n);
        if (n == -1) {
            break;
        }

        int field[5][5] = {}, dp[5][5] = {};
        int i, j;
        for (i = 0; i < n; i++) {
            int x, y;
            scanf("%d %d", &x, &y);
            field[x - 1][y - 1] = 1;
        }

        dp[0][0] = 1;
        for (i = 0; i < 5; i++) {
            for (j = 0; j < 5; j++) {
                if (field[i][j] == 0) {
                    if (i > 0) {
                        dp[i][j] += dp[i - 1][j];
                    }
                    if (j > 0) {
                        dp[i][j] += dp[i][j - 1];
                    }
                }
            }
        }
        printf("%d\n", dp[4][4]);
    }
    return 0;
}
