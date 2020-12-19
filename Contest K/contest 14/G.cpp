#include <bits/stdc++.h>

using namespace std;

string zeros[] = {
  "",
  "0",
  "00",
  "000",
  "0000",
  "00000",
  "000000",
};

void sol(){
  int S = 0, N;
  string s, so = "";
  cin>>s;
  N = s.size();

  for (int i = N; i;){
    if(s[--i] != '0'){
      S++;
      so += (" " + (s[i] + zeros[N-i-1]));
    }
  }

  cout<<S<<endl<<so.substr(1)<<endl;
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int N;
  cin>>N;
  while(N--) sol();
  return 0;
}