#include <bits/stdc++.h>

us

int main(){
  int n, x, b = 0;
  
  scanf("%d", &n);

  for(int i=0; i<n; i++){
    scanf("%d", &x);
    if (x){
      b = 1;
    }
  }

  printf( b ? "HARD\n": "EASY\n");
  

  return 0;
}