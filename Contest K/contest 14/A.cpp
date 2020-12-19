#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int N, x1 = -1, x2 = 1 << 30, a, i1, i2;

  cin >> N;

  for (int i = 0; i < N; i++)
  {
    cin >> a;
    if (x1 < a)
    {
      x1 = a;
      i1 = i;
    }
    if (a <= x2)
    {
      x2 = a;
      i2 = i;
    }
  }
  cout << (i1 + (N - 1 - i2) - (i2 < i1));
  return 0;
}