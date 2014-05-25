#include <stdio.h>

int main(void) {
    while (1) {
        int n, m;
        scanf("%d %d", &n, &m);
        if (n == 0 && m == 0) {
            break;
        }

        int a_set[151] = {}, b_set[151] = {};
        int i;
        for (i = 0; i < n; i++) {
            int a;
            scanf("%d", &a);
            a_set[a - 1] = 1;
        }
        for (i = 0; i < m; i++) {
            int b;
            scanf("%d", &b);
            b_set[b - 1] = 1;
        }

        int a_minus_b = 0, b_minus_a = 0;
        for (i = 0; i < 151; i++) {
            if (a_set[i] && !b_set[i]) {
                a_minus_b++;
            }
            if (b_set[i] && !a_set[i]) {
                b_minus_a++;
            }
        }

        if (a_minus_b > b_minus_a) {
            printf("%d\n", a_minus_b);
        } else {
            printf("%d\n", b_minus_a);
        }
    }
}
