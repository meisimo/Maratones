#include <bits/stdc++.h>
#define MAX 100
using namespace std;

int A[MAX];

void sol()
{
  int N, a, n_e = 0;
  cin >> N;

  for (int i = 0; i < N; i++)
  {
    cin >> a;
    A[i] = a;
    n_e += !(a & 1);
  }

  if (n_e & 1)
  {
    sort(A, A + N);
    bool flag = false;
    for (int i = 1; i < N; i++)
      if (flag = (A[i] - A[i - 1] == 1))
        break;

    if (flag)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
  else
  {
    cout << "YES\n";
  }
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