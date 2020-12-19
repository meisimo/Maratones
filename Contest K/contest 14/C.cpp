#include <bits/stdc++.h>

using namespace std;

void sol()
{
  int N, i = 0, j;
  cin >> N;
  string M[N];

  while (i < N)
  {
    cin >> M[i++];
  }

  bool flag = true;
  N--;
  i = 0;
  while (i <= N)
  {
    j = 0;
    while (j <= N)
    {
      if (M[i][j]!='0')
      {
        if (!(i == N || j == N || M[i + 1][j] !='0' || M[i][j + 1] != '0'))
        {
          flag = false;
          break;
        }
      }
      j++;
    }
    if (!flag)
    {
      break;
    }
    i++;
  }
  cout << (flag ? "YES\n" : "NO\n");
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
/*
5
4
0010
0011
0000
0000
2
10
01
2
00
00
4
0101
1111
0101
0111
4
0100
1110
0101
0111
*/