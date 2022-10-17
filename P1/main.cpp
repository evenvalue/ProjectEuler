#include <bits/stdc++.h>
using namespace std;

using int64 = long long;

constexpr int n = 1000;
constexpr int x = 3;
constexpr int y = 5;

int main() {
  int64 ans = 0;
  for (int i = 0; i < n; i++) {
    if ((i % x == 0) or (i % y == 0)) {
      ans += i;
    }
  }
  cout << ans << '\n';
}