#include <bits/stdc++.h>
#define MAX_N 110

using namespace std;

typedef unsigned unt;
typedef unsigned long long ull;
typedef long long ll;

unt M[MAX_N][MAX_N], S[MAX_N];

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  unt i, j, T, x = 0, t, r, c, N, a, h;

  cin >> T;
  while (x < T)
  {
    cin >> N;
    t = r = c = 0;

    for (i = 0; i < N; i++)
    {
      memset(S, 0, N * sizeof(a));

      h = 0;
      for (j = 0; j < N; j++)
      {
        cin >> a;
        M[i][j] = a;
        a--;
        if (!h && S[a])
        {
          r++;
          h = 1;
        }
        S[a] = 1;
      }
    }

    for (i = 0; i < N; i++)
    {
      memset(S, 0, N * sizeof(a));
      for (j = 0; j < N; j++)
      {
        a = M[j][i] - 1;
        if (S[a])
        {
          c++;
          break;
        }
        S[a] = 1;
      }
    }

    for (i = 0; i < N; i++)
      t += M[i][i];

    cout << "Case #" << (++x) << ": " << t << " " << r << " " << c << endl;
  }

  return 0;
}

/*
3
4
1 2 3 4
2 1 4 3
3 4 1 2
4 3 2 1
4
2 2 2 2
2 3 2 3
2 2 2 3
2 2 2 2
3
2 1 3
1 3 2
1 2 3

*/