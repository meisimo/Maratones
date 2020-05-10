#include <bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio(0)
  cin.tie(0)

  int i, j, x;

  for(i=0; i<5; i++){
    for(j=0; j<5; j++){
      cin>>x;
      if(x){
        cout<<i<<j;
      }
    }
  }


  return 0;
}