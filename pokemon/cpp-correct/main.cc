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

    vi intersection, a_minus_intersection, b_minus_intersection;
    set_intersection(ALL(as), ALL(bs), back_inserter(intersection));
    set_difference(ALL(as), ALL(intersection), back_inserter(a_minus_intersection));
    set_difference(ALL(bs), ALL(intersection), back_inserter(b_minus_intersection));
    cout << max(a_minus_intersection.size(), b_minus_intersection.size()) << endl;
  }
  return 0;
}
