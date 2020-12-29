#include <bits/stdc++.h>

using namespace std;

void S(int N, int n){
  bool match;
  char M[N][N], m[n][n], a;
  int i, j, ii, jj, count, n2;

  for (i = 0; i<N; i++) {
    for (j = 0; j<N; j++) cin >> M[i][j];
    cin.ignore(1);
  }
  for ( i = 0; i < n; i++) {
    for (j = 0; j < n; j++)
      cin >> m[i][j];
    cin.ignore(1);
  }

  for (int x = 0; x < 4; x++){
    count = 0;
    for ( i = 0; i <= N - n; i++){
      for (j = 0; j <= N - n; j++){
        match = 1;
        for (ii = 0 ; ii < n; ii++)
          for ( jj = 0; jj < n; jj++)
            match &= M[ i + ii][ j + jj] == m[ii][jj];  
        count += match;
      }
    }
    cout << count << ( x == 3 ? "\n" :" ");
    
    n2 = n/2;
    for ( i = 0; i < n2; i++) {
      ii = n - i - 1;
      for ( j = i; j < ii; j++){
        jj = n - j - 1;
        a  = m[jj][i];
        m[jj][i]  = m[ii][jj];
        m[ii][jj] = m[j][ii];
        m[j][ii]  = m[i][j];
        m[i][j]   = a;
      }
    }
    // cout << endl;
    // for ( i = 0; i< n; i++){
    //   for (j = 0; j < n; j++){
    //     cout << m[i][j];
    //   }
    //   cout << endl;
    // }
    // cout << "================"<< endl;
  }
}

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int N, n;
  while (1){
    cin >> N >> n;
    if (!N) break;
    S( N, n);
  }

  return 0;
}