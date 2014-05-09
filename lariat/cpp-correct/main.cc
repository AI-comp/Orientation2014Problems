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
    for (int cx = -r; cx < 1000 + r; cx++) {
      int cnt = 0;
      for (int i = 0; i < n; i++) {
        if (cx - r <= xs[i] && xs[i] <= cx + r) {
          cnt++;
        }
      }
      ans = max(ans, cnt);
    }
    cout << ans << endl;
  }
  return 0;
}
