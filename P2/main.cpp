#include <bits/stdc++.h>
using namespace std;

using int64 = long long;

constexpr int n = 4000000;

int main() {
  vector<int> f = {1, 2};
  for (int i = 2; f.back() <= n; i++) {
    f.push_back(f[i - 1] + f[i - 2]);
  }
  int64 ans = 0;
  for (const int x : f) {
    if (x & 1) continue;
    ans += x;
  }
  cout << ans << '\n';
}