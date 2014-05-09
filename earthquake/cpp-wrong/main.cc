#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

int ds[6] = { -1, 300, 200, 100, 50, 5 };

int main() {
    int n;
    for (;;) {
        cin >> n;
        if (n == -1) return 0;
        int maxd2 = 0;
        for (int i = 0; i < n; i++) {
            int x, y;
            cin >> x >> y;
            maxd2 = max(maxd2, x*x + y*y);
        }
        for (int i = 6; i >= 0; i--) {
            if (ds[i]*ds[i] > maxd2 || i == 0) {
                cout << i << endl;
                break;
            }
        }
    }
}
