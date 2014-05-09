#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define ALL(a) (a).begin(), (a).end()
typedef vector<int> vi;

int main() {
  int n, m;
  while(cin >> n >> m, n | m) {
    cout << max(n, m) << endl;
  }
  return 0;
}
