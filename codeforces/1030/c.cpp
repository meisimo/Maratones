#include <bits/stdc++.h>

#define MAX 210

using namespace std;

int main(){
  string input;
  int n, i, sol=0, j;

  int A[MAX], B[MAX], sum=0, x = 0, y;

  memset(B, 0, MAX * sizeof(int) );

  cin >> n;
  cin >> input;

  for(i=0; i<n; i++){
    sum += A[i] = input.at(i) - '0';
  }

  for(i=0; i<n; i++){
    x += A[i];

    if(!(sum%x)){
      y = 0;
      sol = 1;
      for(j = i+1; j<n; j++){
        y += A[j];
        if( y == x){
          y = 0;
        } else if ( x < y){
          sol = 0;
          break;
        }
      }

      if(sol && !y){
        break;
      }
    }
  }

  sol = i < n-1 ? sol : 0; 

  cout<<(sol?"YES\n":"NO\n");

  return 0;
}
/*
4
1248

*/