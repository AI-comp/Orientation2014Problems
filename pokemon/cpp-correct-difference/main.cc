#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define ALL(a) (a).begin(), (a).end()
typedef vector<int> vi;

int main() {
  int n, m;
  while(cin >> n >> m, n | m) {
    vi as(n), bs(m);
    for (int i = 0; i < n; i++) {
      cin >> as[i];
    }
    for (int i = 0; i < m; i++) {
      cin >> bs[i];
    }
    sort(ALL(as));
    sort(ALL(bs));

    vi a_minus_b, b_minus_a;
    set_difference(ALL(as), ALL(bs), back_inserter(a_minus_b));
    set_difference(ALL(bs), ALL(as), back_inserter(b_minus_a));
    cout << max(a_minus_b.size(), b_minus_a.size()) << endl;
  }
  return 0;
}
