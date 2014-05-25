#include <stdio.h>

int main() {
    int n;
    while(1) {
        scanf("%d", &n);
        if (n == 0) {
            break;
        }
        int pos = 0;
        int i;
        for (i = 0; i < n; i++) {
            char d[2];
            int l;
            scanf("%s %d", d, &l);
            if (d[0] == 'L') {
                pos -= l;
            } else {
                pos += l;
            }
        }
        printf("%d\n", pos);
    }
    return 0;
}
