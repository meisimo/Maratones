#include <bits/stdc++.h>

using namespace std;

void sol()
{
  string so = "";
  int n, k;
  cin >> n >> k;

  switch (((n & 1) << 1) + (k & 1))
  {
    // 0 0
  case 0:
    if (!(n % k))
    {
      n /= k;
      k--;
      so += ("YES\n" + to_string(n));
      while (k--)
      {
        so += (" " + to_string(n));
      }
      break;
    }
    // 0 1
  case 1:
    if ((k - 1) << 1 < n)
    {
      n -= (k - 1) << 1;
      k--;
      so += ("YES\n" + to_string(n));
      while (k--)
        so += " 2";
    }
    else
    {
      so += "NO";
    }
    break;
    // 1 0
  case 2:
    so = "NO";
    break;
    // 1 1
  case 3:
    if ((k - 1) < n)
    {
      n -= (k - 1);
      k--;
      so += ("YES\n" + to_string(n));
      k >>= 1;
      while (k--)
        so += " 1 1";
    }
    else
    {
      so += "NO";
    }
    break;
  }

  cout << so << endl;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int N;
  cin >> N;
  while (N--)
    sol();
  return 0;
}