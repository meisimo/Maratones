#include <bits/stdc++.h>
#define N_MAX 3010

using namespace std;

typedef long long ll;

ll A[N_MAX];

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  string str, aux;
  int i;

  while (getline(cin, str)){
    stringstream ss(str);
    i = 0;
    while(getline(ss, aux, ' ')){
      stringstream ss1(aux);
      ss1 >> A[i++];
    }
  }

  return 0;
}