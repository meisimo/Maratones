#include <bits/stdc++.h>
#define N_MAX 3010

using namespace std;

typedef long long ll;

ll A[N_MAX];
bool M[N_MAX];

void S(const ll *A, const int N){
  bool flag = 1;
  ll x;
  memset(M, 0, N_MAX);

  for (int i = 1; i < N; i++) if ( (x = abs(A[i]-A[i-1])) < N ) M[x] = 1;
  for (int i = 1; i < N; i++) flag &= M[i];
  
  cout << ( ( flag ) ? "Jolly" : "Not jolly");
}

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, i;

  while (cin >> n){

    for ( i = 0; i < n; i++){
      cin >> A[i];
    }

    S(A, n);
    cout << endl;
  }

  return 0;
}