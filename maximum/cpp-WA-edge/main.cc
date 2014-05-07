#include <iostream>

using namespace std;

int main() {
  int n;
  while(cin >> n, n) {
    int ans = 0;
    int as[100];
    for (int i = 0; i < n; i++) {
      cin >> as[i];
    }
    for (int i = 0; i < n; i++) {
      if (i == 0) {
        if (as[i] > as[i + 1]) {
          ans++;
        }
      } else if (i == n - 1){
        if (as[i - 1] < as[i]) {
          ans++;
        }
      } else {
        if (as[i - 1] < as[i] && as[i] > as[i + 1]) {
          ans++;
        }
      }
    }
    cout << ans << endl;
  }
  return 0;
}
