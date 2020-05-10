#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, d, x, y, _d_2n, m;
  string sol = "";
  cin >> n >> d >> m;
  _d_2n = (n << 1) - d;
  while (m--)
  {
    cin >> x >> y;
    if (-d <= y - x && y - x <= d && d <= x + y && x + y <= _d_2n)
      sol += "YES\n";
    else
      sol += "NO\n";
  }
  cout<<sol;
  return 0;
}