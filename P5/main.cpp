#include <bits/stdc++.h>
using namespace std;

using int64 = long long;

int64 lcm(const int64 x, const int64 y) {
  return (x * y) / gcd(x, y);
}

int main() {
  int64 ans = 1;
  for (int i = 1; i <= 20; i++) {
    ans = lcm(ans, i);
  }
  cout << ans << '\n';
}