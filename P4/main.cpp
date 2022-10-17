#include <bits/stdc++.h>
using namespace std;

using int64 = long long;

bool is_palindrome(const string &s) {
  string s2 = s;
  reverse(s2.begin(), s2.end());
  return s == s2;
}

int main() {
  int ans = 0;
  for (int i = 999; i >= 100; i--) {
    for (int j = 999; j >= 100; j--) {
      int prod = i * j;
      if (is_palindrome(to_string(prod))) {
        ans = max(ans, prod);
      }
    }
  }
  cout << ans << '\n';
}