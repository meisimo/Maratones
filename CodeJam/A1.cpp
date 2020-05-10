#include <bits/stdc++.h>
#define L 1000000000
#define L_MED 500000000

using namespace std;

typedef unsigned unt;
typedef unsigned long long ull;
typedef unsigned long long ull;
typedef long long ll;

ull search_x( x, y, c, t = 1 ){
  if ( c <= 1) return x;
   
  string ans = "";
  cout<<x<<" "<<y<<std::flush;

  cin>>ans;

  if ( ans == "MISS")
    return search_x(x - t*c , y, c>>1);
  else if ( ans == "HIT" )
    return search_x(x + t*c , y, c>>1);
  else 
    return L+100;
}

void S()
{
  ll A, B;
  cin >> A >> B;
  ll x = 0, y = 0, x1, x2, y1, y2;
  string ans = "MISS";

  while (true)
  {
    cout << x << " " << y << endl;
    cout << std::flush;

    cin >> ans;

    if (ans != "MISS")
      break;

    if (!x && !y)
    {
      x = L_MED;
      y = L_MED;
    }
    else if (x == L_MED && y == L_MED)
    {
      y = -L_MED;
    }
    else if (x == L_MED && y == -L_MED)
    {
      x = -L_MED;
    }
    else if (x == -L_MED && y == -L_MED)
    {
      y = L_MED;
    }
    else
    {
      cout << "NO : (";
      return;
    }
  }

  x1 = x;

  
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int T;

  cin >> T;
  for (int i = 1; i <= T; i++)
  {
    cout << "Case #" << i << ": ";
    S();
    cout << endl;
  }

  return 0;
}

/*
3
4
1 2 3 4
2 1 4 3
3 4 1 2
4 3 2 1
4
2 2 2 2
2 3 2 3
2 2 2 3
2 2 2 2
3
2 1 3
1 3 2
1 2 3

*/