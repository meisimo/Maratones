#include <bits/stdc++.h>
#define MAX 100010

using namespace std;

int L1[MAX], L2[MAX];

bool S(){
  int n, B, i, l, r, a, b;
  string str = "";
  cin >> n >> B;

  if ( !n && !B) return 0;

  for ( i = 0; i <= n; i++){
    L1[i] = i + 1;
    L2[i] = i - 1;
  }
  L1[i] = i + 1;
  L2[i] = i - 1;

  while(B--){
    cin >> l >> r;
    a = L1[L2[l]] = L1[r];
    b = L2[L1[r]] = L2[l];
    str += ( 0 < b && b <= n  ? to_string(b) : "*");
    str += " ";
    str += ( 0 < a && a <= n  ? to_string(a) : "*");
    str += "\n";
  }
  str += "-\n";

  cout << str;

  return 1;
}

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  while(S());

  return 0;
}
