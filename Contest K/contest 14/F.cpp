#include <bits/stdc++.h>

using namespace std;

void sol(){
  int a, b, L;
  cin>>a>>b;
  if (b<a)
    swap(a,b);
  L = max (b,a<<1);
  cout<<(L*L)<<endl; 
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int N;
  cin>>N;
  while(N--)  sol();

  return 0;
}