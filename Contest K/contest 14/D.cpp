#include <bits/stdc++.h>
#define MAX 100
using namespace std;

int A[MAX];
void sol(){
  int N, dif = 1<<30;
  cin>>N;

  memset(A, 0, N * sizeof(int));

  for (int i =0; i<N;i++)
    cin>>A[i];
  
  sort(A, A+N);

  for (int i=1; i<N; i++){
    dif = min(abs(A[i-1]-A[i]), dif);
  }

  cout<<dif<<endl;
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int N;
  cin>>N;
  while(N--) sol();
}