#include <iostream>

using namespace std;

int main() {
  int n;
  while(cin >> n, n) {
    int pos = 0;
    for (int i = 0; i < n; i++) {
      char d;
      int l;
      cin >> d >> l;
      if (d == 'L') {
        pos += l;
      } else {
        pos -= l;
      }
    }
    cout << pos << endl;
  }
  return 0;
}
