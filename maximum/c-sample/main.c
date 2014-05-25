#include <stdio.h>

int main(void) {
    while (1) {
        int n;
        scanf("%d", &n);
        if (n == 0) {
            break;
        }

        int a[500];
        int i;
        for (i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        int answer = 0;
        for (i = 1; i <= n - 2; i++) {
            if (a[i - 1] < a[i] && a[i] > a[i + 1]) {
                answer++;
            }
        }
        printf("%d\n", answer);
    }
}
