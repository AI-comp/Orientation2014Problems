#include <stdio.h>

int main() {
    while (1) {
        int a, b;
        scanf("%d %d", &a, &b);
        if (a == 0 && b == 0) {
            break;
        }
        int answer = a + b;
        printf("%d\n", answer);
    }
    return 0;
}
