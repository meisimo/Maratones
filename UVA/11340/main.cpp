#include <bits/stdc++.h>

using namespace std;

// declaring this as long long results in WA.
typedef double ll;

ll LETTERS[514];

void S() {
  // seems to be faster than the memset
  for ( int i  = 0; i < 514;  i++) LETTERS[i] = 0;
  
  int K, M;
  string str;
  ll sum = 0;
  char c;

  cin >> K;
  cin.ignore(1);
  while(K--){
    getline(cin, str);
    c = str[0];
    stringstream ss(str.substr(2));
    ss >> LETTERS[c];
  }

  cin >> M;
  cin.ignore(1);
  while(M--) {
    str = "";
    getline(cin, str);
    for (char c: str) {
      sum += LETTERS[c];
    }
  }
  
  printf("%.2lf$\n", (sum / 100));
}

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int Case;

  cin>>Case;
  while(Case--){
    S();
  }

  return 0;
}