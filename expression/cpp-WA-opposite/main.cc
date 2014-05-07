#include <iostream>

using namespace std;

int main() {
  int a, b, c, d;
  while(cin >> a >> b >> c >> d, a | b | c | d) {
    for (int x = -5; x <= 5; x++) {
      cout << a * a * a * x + b * b + x + c * x + d << endl;
    }
  }
  return 0;
}
