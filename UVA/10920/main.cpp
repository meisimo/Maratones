#include <bits/stdc++.h>

using namespace std;

void S(const long long N, const long long L){
  long long x, y, dir, m = 0, i = 0, j = 0, l = 0, step = 0;

  x = y = ((N >> 1) +( N & 1));

  while ( j < L) {
    dir  = l % 4;
    m   += dir == 0 || dir == 2;
    step = min(m, L - j);

    if      (dir == 0) y += step;
    else if (dir == 1) x -= step;
    else if (dir == 2) y -= step;
    else               x += step;

    l ++;
    j += step;
  }
  cout << "Line = " << y <<  ", column = " << x << ".\n";
}

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);


  long long N, L;
  while (1){
    cin >> N >> L;
    if (!N) break;
    S(N, L - 1);
  }
}
