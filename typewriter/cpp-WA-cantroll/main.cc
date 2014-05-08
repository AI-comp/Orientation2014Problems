#include <iostream>
#include <string>

using namespace std;

int main() {
  string s;
  while(cin >> s, s != "!") {
    string ans;
    int pos = 0;
    for (int i = 0; i < s.size(); i++) {
      switch (s[i]) {
        case '+':
          pos++;
          break;
        case '-':
          pos--;
          break;
        case '.':
          ans += 'a' + (pos < 0 ? pos + 26 : pos);
          break;
      }
    }
    cout << ans << endl;
  }
  return 0;
}
