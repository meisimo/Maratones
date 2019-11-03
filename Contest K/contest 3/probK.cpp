#include <bits/stdc++.h>

using namespace std;

typedef unsigned unt;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, z = 0;
    string str;

    cin >> n;
    cin.ignore(1);
    cin >> str;

    for (unt i = 0; i < n; i++)
        if (str.at(i) == '0')
            z++;

    cout << (abs(n - (z << 1))) << endl;
    return 0;
}