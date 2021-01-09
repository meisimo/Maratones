#include <bits/stdc++.h>

using namespace std;

int hash(int A[3][3]) {
  int h = 0, i = 0, y, x;

  for ( x = 0; x < 3; x++)
    for ( y = 0; y < 3; y++){
      h += A[x][y] << i;
      i = 0;
    }

  return 0;
}

void S() {
  int A[3][3], i, j;
  set<int> s;

  for ( i = 0; i < 3; i++)
    for (j = 0; j < 3; j++)
      cin >> A[i][j];

  while (true){
  }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;

    cin >> N;

    while(N--) S();

    return 0;
}
