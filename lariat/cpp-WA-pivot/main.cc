#include <iostream>

using namespace std;

int main() {
  int r, n;
  while(cin >> r >> n, r | n) {
    int xs[100];
    for (int i = 0; i < n; i++){
      cin >> xs[i];
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
      int cx = xs[i];
      int cnt = 0;
      for (int j = 0; j < n; j++) {
        if (cx - r <= xs[j] && xs[j] <= cx + r) {
          cnt++;
        }
      }
      ans = max(ans, cnt);
    }
    cout << ans << endl;
  }
  return 0;
}
