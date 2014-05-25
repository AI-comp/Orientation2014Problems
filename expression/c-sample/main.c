#include <stdio.h>

int main(void) {
    while (1) {
        int a, b, c, d, x;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        if (a == 0 && b == 0 && c == 0 && d == 0) {
            break;
        }
        for (x = -5; x <= 5; x++) {
            printf("%d\n", a * x * x * x + b * x * x + c * x + d);
        }
    }
    return 0;
}
