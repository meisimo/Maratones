#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    int t;
    while (b)
    {
        t = b;
        b = a % b;
        a = b;
    }
    return a;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, A[3], S = 0, a, n_temp, G[3];

    cin >> n >> A[0] >> A[1] >> A[2];
    sort(A, A + 3);
    n_temp = n;

    G[2] = A[2];
    G[1] = gcd(A[1], A[2]);
    G[0] = gcd(A[0], G[1]);
    for (int i = 0; i < 3; i++)
    {
        a = A[i];
        if (!(n_temp % a))
        {
            S += n_temp / a;
        }
    }

    cout << S << endl;
    return 0;
}