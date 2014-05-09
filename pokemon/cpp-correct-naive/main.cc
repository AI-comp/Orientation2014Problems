#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define ALL(a) (a).begin(), (a).end()
typedef vector<int> vi;

const int MAX = 151;

int main() {
  int n, m;
  while(cin >> n >> m, n | m) {
    int as[MAX] = {}, bs[MAX] = {};
    for (int i = 0; i < n; i++) {
      int a;
      cin >> a;
      as[a - 1] = 1;
    }
    for (int i = 0; i < m; i++) {
      int b;
      cin >> b;
      bs[b - 1] = 1;
    }

    int a_cnt = 0, b_cnt = 0;
    for (int i = 0; i < MAX; i++) {
      if (as[i] && !bs[i]) {
        a_cnt++;
      }
      if (bs[i] && !as[i]) {
        b_cnt++;
      }
    }
    int trade = min(a_cnt, b_cnt);
    cout << trade + max(a_cnt - trade, b_cnt - trade) << endl;
  }
  return 0;
}
