#include <iostream>
#include <string>

using namespace std;

int main() {
  string s;
  while(cin >> s, s != "!") {
    string ans;
    char c = 'a';
    for (int i = 0; i < s.size(); i++) {
      switch (s[i]) {
        case '+':
          c++;
          if (c > 'z') {
            c = 'a';
          }
          break;
        case '-':
          c--;
          if (c < 'a') {
            c = 'z';
          }
          break;
        case '.':
          ans += c;
          break;
      }
    }
    cout << ans << endl;
  }
  return 0;
}
