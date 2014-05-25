#include <stdio.h>

int main(void) {
    while (1) {
        int n;
        scanf("%d", &n);
        if (n == 0) {
            break;
        }

        int answer = 1;
        int i;
        for (i = 1; i <= n; i++) {
            answer *= i;
            answer %= 2014;
        }
        printf("%d\n", answer);
    }
    return 0;
}
