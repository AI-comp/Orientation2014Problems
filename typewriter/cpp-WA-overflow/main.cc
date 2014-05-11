#include <iostream>
#include <string>

using namespace std;

int main() {
  int l;
  while(cin >> l, l != 0) {
    string s;
    cin >> s;
    string ans;
    char c = 'a';
    for (int i = 0; i < s.size(); i++) {
      switch (s[i]) {
        case '+':
          c++;
          break;
        case '-':
          c--;
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
