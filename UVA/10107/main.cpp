#include <bits/stdc++.h>
#define MAX 10010

using namespace std;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int i=0, j;
  vector<long long> A(MAX);

  while(cin>>A[i++]){
    j = i >> 1;

    if ( i & 1 ){
      nth_element(A.begin(), A.begin() + j, A.begin() + i);
      cout << A[j] << endl;
    }
    else {
      nth_element(A.begin(), A.begin() + j - 1, A.begin() + i );
      nth_element(A.begin(), A.begin() + j,     A.begin() + i );
      cout << ((A[j - 1] + A[j])>>1) << endl;
    }
  }
  cout << endl;

  return 0;
}
