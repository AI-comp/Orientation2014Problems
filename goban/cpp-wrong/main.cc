#include <iostream>
#include <string.h>
using namespace std;

int dp[10][10], f[10][10];

int main() {
    int n;
    for (;;) {
        cin >> n;
        if (n == -1) return 0;
//        memset(dp, 0, sizeof(dp));
        memset(f, 0, sizeof(f));
        for (int i = 0; i < n; i++) {
            int x, y;
            cin >> x >> y;
            f[x-1][y-1] = 1;
        }
        dp[0][0] = 1;
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                if (f[i][j] == 0) {
                    dp[i+1][j] += dp[i][j];
                    dp[i][j+1] += dp[i][j];
                }
            }
        }
        cout << dp[4][4] << endl;
    }
}
