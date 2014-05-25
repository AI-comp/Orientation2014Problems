#include <stdio.h>

int main(void){
    while (1) {
        int n, p;
        scanf("%d %d", &n, &p);
        if (n == 0 && p == 0) {
            break;
        }
        int answer = 0;
        int i;
        for (i = 0; i < n; i++) {
            int t;
            scanf("%d", &t);
            p -= t;
            if (p >= 0) {
                answer++;
            }
        }
        printf("%d\n", answer);
    }
    return 0;
}
