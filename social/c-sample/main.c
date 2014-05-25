#include <stdio.h>

int main(void){
    while (1) {
        int n, m;
        scanf("%d %d", &n, &m);
        if (n == 0 && m == 0) {
            break;
        }
        int followers[1000] = {};
        int i;
        for (i = 0; i < m; i++) {
            int a, b;
            scanf("%d %d", &a, &b);
            a--, b--;
            followers[b]++;
        }
        int answer = 0;
        for (i = 0; i < n; i++) {
            if (followers[i] > followers[answer]) {
                answer = i;
            }
        }
        printf("%d\n", answer + 1);
    }
    return 0;
}

