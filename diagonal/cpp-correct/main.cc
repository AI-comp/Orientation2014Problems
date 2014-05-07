#include <iostream>
#include <string>

using namespace std;

int main() {
  int n;
  while(cin >> n, n) {
    string ans;
    for (int i = 0; i < n; i++) {
      string s;
      cin >> s;
      ans += s[i];
    }
    cout << ans << endl;
  }
  return 0;
}
