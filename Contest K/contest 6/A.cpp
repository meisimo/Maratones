#include <bits/stdc++.h>

using namespace std;

int M[5][5], Sol[5][5];

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int i, j, count;

  for (i = 1; i < 4; i++)
    for (j = 1; j < 4; j++)
      cin >> M[i][j];

  for (i = 1; i < 4; i++)
    for (j = 1; j < 4; j++){
      count = M[i][j]+M[i-1][j]+M[i+1][j]+M[i][j-1]+M[i][j+1];
      Sol[i][j] = !(count & 1);
    }

  for (i = 1; i < 4; i++){
    for (j = 1; j < 4; j++)
      cout << Sol[i][j];
    cout<< "\n";
  }

  return 0;
}