#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <algorithm>
using namespace std;

int x[10], y[10];
int ix[10];

int dist(int x1, int y1, int x2, int y2) {
    int x = x1 - x2;
    int y = y1 - y2;
    return abs(x) + abs(y);
}

int main() {
    int n;
    for (;;) {
        cin >> n;
        if (n == 0) return 0;
        for (int i = 0; i < n; i++) {
            cin >> x[i] >> y[i];
            ix[i] = i;
        }
        x[n] = 0;
        y[n] = 0;
        int ans = 1<<30;
        do {
            int d = dist(0, 0, x[0], y[0]);
            for (int i = 0; i < n; i++) {
                d += dist(x[i], y[i], x[i+1], y[i+1]);
            }
            if (ans > d) {
                ans = d;
            }
        } while (false);
        printf("%d\n", ans);
    }
}
