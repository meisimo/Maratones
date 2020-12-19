#include <bits/stdc++.h>

using namespace std;

long long gcd(long long x, long long y)
{
  if (!y)
    return x;
  return gcd(y, x % y);
}

int main()
{
  long long n, m, k, a, g, b, _k;

  cin >> n >> m >> k;

  if (((n * m << 1) % k))
  {
    cout << "NO\n";
    return 0;
  }

  _k = (k & 1 ? k : k >> 1);

  g = gcd(n, _k);
  a = n / g;
  b = (m * g) / _k;

  if (k & 1)
  {
    if (a << 1 <= n)
      a <<= 1;
    else
      b <<= 1;
  }

  cout
      << "YES\n"
      << "0 0\n"
      << a << " 0\n"
      << "0 " << b << endl;

  return 0;
}