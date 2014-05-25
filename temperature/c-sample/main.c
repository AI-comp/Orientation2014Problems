#include <stdio.h>

int main() {
    while(1) {
        int n;
        scanf("%d", &n);
        if (n == 0) {
            break;
        }

        int t[100];
        int i;
        for(i = 0; i < n; i++) {
            scanf("%d", &t[i]);
        }

        int max = -50, min = 50;
        for(i = 0; i < n; i++) {
            if (t[i] > max) {
                max = t[i];
            }
            if (t[i] < min) {
                min = t[i];
            }
        }
        printf("%d\n", max - min);
    }
}
