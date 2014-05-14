#include <iostream>
using namespace std;

int main() {
    int a, b;
    while(cin >> a >> b, a | b) {
        int answer = a + b;
        cout << answer << endl;
    }
}
