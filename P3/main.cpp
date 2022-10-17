#include <bits/stdc++.h>
using namespace std;

using int64 = long long;

vector<int> sieve(const int n) {
  vector<bool> is_prime(n + 1, true);
  vector<int> primes;
  is_prime[0] = is_prime[1] = false;
  for (int i = 2; i <= n; i++) {
    if (not is_prime[i]) continue;
    for (int64 j = i * 1LL * i; j <= n; j += i) {
      is_prime[j] = false;
    }
    primes.push_back(i);
  }
  return primes;
}

int main() {
  int64 n = 600851475143;
  const vector<int> &primes = sieve(775150);
  int64 ans = 0;
  for (const int p : primes) {
    while (n % p == 0) {
      n /= p;
      ans = max(ans, p * 1LL);
    }
  }
  ans = max(ans, n);
  cout << ans << '\n';
}