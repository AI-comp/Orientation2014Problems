/* This solution will die with error if the input is evil.
 * Try to keep the input kind.
 */

#include <iostream>
#include <string.h>
#include <algorithm>
#include <cmath>
using namespace std;

int ds[6] = { -1, 300, 200, 100, 50, 5 };

int main() {
    int n;
    for (;;) {
        cin >> n;
        if (n == 0) return 0;
        double maxd = 0;
        for (int i = 0; i < n; i++) {
            int x, y;
            cin >> x >> y;
            maxd = max(maxd, sqrt(x*x + y*y));
        }
        for (int i = 6; i >= 0; i--) {
            if (ds[i] >= maxd || i == 0) {
                cout << i << endl;
                break;
            }
        }
    }
}
