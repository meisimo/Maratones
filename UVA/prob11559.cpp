#include <bits/stdc++.h>
#define MAX_B 1000000
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, B, H, W, p, a, min = MAX_B, i;
    bool flag;
    while (cin >> N >> B >> H >> W)
    {
        min = B + 1;
        while (H--)
        {
            flag = false;
            cin >> p;
            p *= N;
            i = W;
            while (i--)
            {
                cin >> a;
                if (N <= a)
                    flag = true;
            }
            if (flag && p < min)
            {
                min = p;
            }
        }
        if (B < min)
            cout << "stay home\n";
        else
            cout << min << endl;
    }
    return 0;
}
/*
3 1000 2 3
200
0 2 2
300
27 3 20
5 2000 2 4
300
4 3 0 4
450
7 8 0 13

*/