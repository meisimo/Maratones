#include <bits/stdc++.h>

using namespace std;

typedef unsigned unt;
typedef unsigned long long ull;
typedef long long ll;

string P[] = {
  ")))))))))",
  "))))))))",
  ")))))))",
  "))))))",
  ")))))",
  "))))",
  ")))",
  "))",
  ")",
  "",
  "(",
  "((",
  "(((",
  "((((",
  "(((((",
  "((((((",
  "(((((((",
  "((((((((",
  "(((((((((",
};

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  char c;
  int T, a, b, x = 0, N;
  string s_in, s_out;
  unt i;

  cin >> T;
  cin.ignore(0);
  while (x < T)
  {
    cin >> s_in;
    s_out = "";
    a = 0;
    N = s_in.length();

    for (i = 0; i < N; i++)
    {
      c = s_in.at(i);
      b = c - '0';
      s_out += P[b-a+9] ;
      s_out += c;
      a = b;
    }
    s_out += P[-b+9] ;
    cout << "Case #" << (++x) << ": " << s_out << endl;
  }

  return 0;
}
/*
(
 (
  (
   (
    (
     (
      (
       (
        (
         9
        )
       )
      )
     )
     5
     (
      (
       (
        8
        (
         9
        )
       )
      )
     )
    )
   )
  )
 )
 1
 (
  (
   (
    (
     (
      (
       (
        8
       )
       7
      )
      6
     )
    )
   )
  )
  2
  )
 1
)
*/
/*
5
0000
101
111000
1
9589187621
*/