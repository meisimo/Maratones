#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    bool flag;
    int N;
    pair<int, bool> *p;
    string str, str_out = "", food1, food2, tmp;
    map<char, pair<int, bool>> M;

    cin >> N;
    cin.ignore(1);
    while (N--)
    {
        getline(cin, str);
        getline(cin, food1);
        getline(cin, food2);

        flag = false;
        tmp = "";
        M.clear();

        if (!str.size())
        {
            str_out += "\n";
            continue;
        }

        for (char c : str)
            M[c].first++;
        for (char c : food1)
        {
            p = &M[c];
            if( !(p->second) )
                p->second = true;
            if ((*n) < 0)
            {
                flag = true;
                break;
            }
        }
        if (!flag)
        {
            for (char c : food2)
            {

                n = &S[c];
                if (*n < 0)
                {
                    *n = -(*n);
                }
                (*n)--;
                if ((*n) < 0)
                {
                    flag = true;
                    break;
                }
            }
        }
        if (flag)
        {
            str_out += "CHEATER\n";
        }
        else
        {
            for (auto s : S)
            {
                if (s.second < 0)
                {
                    tmp += s.first;
                }
            }
            str_out += tmp + "\n";
        }
    }
    cout << str_out;
    return 0;
}
/*
5
ABCD
AB
C
AABEDCS
AAA
B
EDSMB
MSD
A
CCCDDDDD
C
D
IWANTSODER
SOW
RAT
*/