#include <iostream>
using namespace std;

char dirs[8][4] = { "N", "NW", "W", "SW", "S", "SE", "E", "EN" };

int main() {
    int d;
    for (;;) {
        cin >> d;
        if (d == -1) return 0;
        cout << dirs[d / 45] << endl;
    }
}
