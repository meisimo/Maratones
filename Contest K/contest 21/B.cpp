#include <bits/stdc++.h>
#define MAX_L 100010

using namespace std;

typedef long long ll;

ll A[MAX_L];

int search(ll* A, ll val, ll i, ll size){
  if ( A[i-1] < val && val <= A[i] ){
    return i;
  }
  size = ( size >> 1 ) + (size & 1);
  return search(A, val, (val <  A[i] ?  i-size : i+size), size);
}

int main(){
  // ios_base::sync_with_stdio(0);
  // cin.tie(0);

  ll c, t, n, m, i;
  cin>>n>>m;
  
  A[0]   = 0;
  A[n+1] = 1LL << 62;

  for (i=1; i<=n; i++){
    cin>>c>>t;
    A[i] = c*t + A[i-1];
  }
  // cout << "\n";
  // for (i=0; i<=n+1; i++){
  //   cout << A[i] << "\t"; 
  // }
  // cout << "\n";

  for (i=0; i<m; i++){
    cin >> c;
    cout << search(A, c, n, n) << endl;
  }

  return 0;
}