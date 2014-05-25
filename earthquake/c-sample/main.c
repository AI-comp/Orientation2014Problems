#include <stdio.h>
#include <math.h>

int main(void){
    while (1) {
        int n;
        scanf("%d", &n);
        if (n == 0) {
            break;
        }
        double farthest = 0;
        int i;
        for (i = 0; i < n; i++) {
            int x, y;
            scanf("%d %d", &x, &y);
            double distance = sqrt(x * x + y * y);
            if (distance > farthest) {
                farthest = distance;
            }
        }
        int answer;
        if (farthest <= 5) {
            answer = 5;
        } else if (farthest <= 50) {
            answer = 4;
        } else if (farthest <= 100) {
            answer = 3;
        } else if (farthest <= 200) {
            answer = 2;
        } else if (farthest <= 300) {
            answer = 1;
        } else {
            answer = 0;
        }
        printf("%d\n", answer);
    }
    return 0;
}

