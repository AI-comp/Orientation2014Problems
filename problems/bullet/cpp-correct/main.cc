#include <iostream>

using namespace std;

int main() {
  int n, p;
  while(cin >> n >> p, n | p) {
    int ans = 0;
    for (int i = 0; i < n; i++) {
      int t;
      cin >> t;
      if (p >= t) {
        ans++;
      }
      p -= t;
    }
    cout << ans << endl;
  }
  return 0;
}
