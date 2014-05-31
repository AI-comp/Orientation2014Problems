#include <stdio.h>

int main(void) {
    while (1) {
        int r, n;
        scanf("%d %d", &r, &n);
        if (r == 0 && n == 0) {
            break;
        }

        int x[100];
        int i;
        for (i = 0; i < n; i++) {
            scanf("%d", &x[i]);
        }

        int answer = 0;
        int cx;
        for (cx = 0; cx <= 1000; cx++) {
            int count = 0;
            for (i = 0; i < n; i++) {
                if (cx - r <= x[i] && x[i] <= cx + r) {
                    count++;
                }
            }
            if (count > answer) {
                answer = count;
            }
        }
        printf("%d\n", answer);
    }
}
