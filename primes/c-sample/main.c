#include <stdio.h>

int isPrime(int n) {
    int i;
    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main(void){
    while (1) {
        int n;
        scanf("%d", &n);
        if (n == 0) {
            break;
        }

        int answer = 0;
        int i, j;
        for (i = 2; i < n; i++) {
            for (j = 2; j < n; j++) {
                if(i * j == n && isPrime(i) && isPrime(j)) {
                    answer = 1;
                }
            }
        }
        printf("%s\n", (answer ? "YES" : "NO"));
    }
    return 0;
}
