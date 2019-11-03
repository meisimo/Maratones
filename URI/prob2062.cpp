#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T, L, pos;
    cin >> T;
    string str_out = "", str, sub;
    while (T--)
    {
        cin >> str;
        L = str.size();
        if (L == 3)
        {
            pos = L - 3;
            L--;
            sub = str.substr(pos, 2);
            if (sub == "UR" || sub == "OB")
            {
                str[L] = 'I';
            }
        }
        str_out += str;
        if (T)
        {
            str_out += ' ';
        }
    }
    cout << str_out << endl;
    return 0;
}