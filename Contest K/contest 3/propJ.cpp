#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string str;
    bool wrong = false;
    char c;
    int n, i;
    int four1 = 0, four2 = 0;

    cin >> n;
    cin.ignore(1);
    cin >> str;

    for (i = n >> 1; i;)
    {
        c = str.at(--i);
        if (c != '4' && c != '7')
        {
            wrong = true;
            break;
        }
        else if (c == '4')
        {
            four1++;
        }
    }
    if (!wrong)
    {
        for (i = n >> 1; i < n;)
        {
            c = str.at(i++);
            if (c != '4' && c != '7')
            {
                wrong = true;
                break;
            }
            else if (c == '4')
            {
                four2++;
            }
        }
        if (!wrong)
        {
            wrong = (four1 != four2);
        }
    }
    cout << (wrong ? "NO\n" : "YES\n");
    return 0;
}