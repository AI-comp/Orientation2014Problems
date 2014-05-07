#include <stdio.h>
#include <math.h>
#include <iostream>
#include <algorithm>
using namespace std;

double x[10], y[10];
int ix[10];

double dist(double x1, double y1, double x2, double y2) {
    double x = x1 - x2;
    double y = y1 - y2;
    return sqrt(x*x + y*y);
}

int main() {
    int n;
    for (;;) {
        cin >> n;
        if (n == -1) return 0;
        for (int i = 0; i < n; i++) {
            cin >> x[i] >> y[i];
            ix[i] = i;
        }
        x[n] = 0;
        y[n] = 0;
        double ans = 1e100;
        do {
            int d = dist(0, 0, x[0], y[0]);
            for (int i = 0; i < n; i++) {
                d += dist(x[i], y[i], x[i+1], y[i+1]);
            }
            if (ans > d) {
                ans = d;
            }
        } while (next_permutation(ix, ix+n));
        printf("%.3f\n", ans);
    }
}
