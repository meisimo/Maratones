#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T, i, N, a, maxi;
    cin >> T;
    for (i = 1; i <= T; i++)
    {
        maxi = 0;
        cin >> N;
        while (N--)
        {
            cin >> a;
            maxi = max(a, maxi);
        }
        cout << "Case " << i << ": " << maxi << endl;
    }
    return 0;
}

/*
2
5 9 3 5 2 6
1 2

*/