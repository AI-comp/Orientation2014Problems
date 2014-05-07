#include <iostream>

using namespace std;

const int M = 2014;

int main() {
  int n;
  while(cin >> n, n) {
    int ans = 1;
    for (int i = 1; i <= n; i++) {
      ans *= i;
      ans %= M;
    }
    cout << ans << endl;
  }
  return 0;
}
