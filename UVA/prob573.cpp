#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int i;
    double p, H, U, D, F, h, d, d_o;
    while (cin >> H >> U >> D >> F && H)
    {
        h = 1;
        i = 1;
        if (U <= H)
        {
            d_o = U;
            h = d_o - D;
            p = U*(F / 100.0);
            while (0 <= h)
            {
                i++;
                d =  max( d_o - p, 0.0);
                h += d;
                if (H <= h)
                    break;
                h -= D;
                d_o = d;
            }
        }
        cout << (0 < h ? "success on day " : "failure on day ") << i << endl;
    }
    return 0;
}

/*
6 3 1 10
10 2 1 50
50 5 3 14
50 6 4 1
50 6 3 1
1 1 1 1
1 1 1 100
1 1 100 1
1 1 100 100
1 100 1 1
1 100 1 100
1 100 100 1
1 100 100 100
100 1 1 1
100 1 1 100
100 1 100 1
100 1 100 100
100 100 1 1
100 100 1 100
100 100 100 1
100 100 100 100
0 0 0 0

2
2
1
1
1
1
1
1
*/