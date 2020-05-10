#include <bits/stdc++.h>
#define MAX 1010
using namespace std;

typedef unsigned unt;
typedef unsigned long long ull;
typedef long long ll;

typedef vector<int> vi;
typedef set<int> uset;

char sol[MAX];

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int i, N, T, x = 0, a, b, J, C, flag;
  cin >> T;
  while (x < T)
  {
    map<int, uset> Map;

    flag = 1;

    memset(sol, 0, MAX * sizeof(char));
    J = C = -1;

    cin >> N;

    for (i = 0; i < N; i++)
    {
      cin >> a >> b;
      Map[a].insert(i);
      Map[b].insert(i);
    }

    for (auto &activity : Map)
    {
      // cout<<"\n\nHORA "<<activity.first<<endl;
      while(!activity.second.empty())
      {  
        if (activity.second.find(J) != activity.second.end())
        {
          // cout<<"J conseguido!"<<endl;
          activity.second.erase(J);
          J = -1;
        }
        else if (activity.second.find(C) != activity.second.end())
        {
          // cout<<"C conseguido!"<<endl;
          activity.second.erase(C);
          C = -1;
        }
        else if (J == -1)
        {
          a = *(activity.second.begin());
          // cout<<a<<"J\n";
          sol[a] = 'J';
          J = a;
          activity.second.erase(a);
        }
        else if (C == -1)
        {
          a = *(activity.second.begin());
          // cout<<a<<"C\n";
          sol[a] = 'C';
          C = a;
          activity.second.erase(a);
        }
        else
        {
          flag = 0;
          break;
        }
      }
      if(!flag) break;
    }

    if (flag)
      cout << "Case #" << (++x) << ": " << sol << endl;
    else
      cout << "Case #" << (++x) << ": IMPOSSIBLE\n";
  }

  return 0;
}

/*
7
3
360 480
420 540
600 660
3
0 1440
1 3
2 4
5
99 150
1 100
100 301
2 5
150 250
2
0 720
720 1440
5
1 10
1 10
10 12
10 13
10 15
3
10 11
10 12
1  10
5
0 10
0 1
1 2
2 3
3 4
*/