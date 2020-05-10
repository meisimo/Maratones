#include <bits/stdc++.h>
#define MAX_N 50
#define in_n                \
    for (i = 0; i < N; i++) \
    cin >>
#define MIN 0.75
using namespace std;

string NAMES[MAX_N], ATT[MAX_N];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T, N, i;
    int n_p, n_clss;
    string str_out = "", loc_sol;

    cin >> T;

    while (T--)
    {
        cin >> N;
        cin.ignore(1);
        in_n NAMES[i];
        in_n ATT[i];

        loc_sol = "";
        for (i = 0; i < N; i++)
        {
            n_p = n_clss = 0;
            for (char c : ATT[i])
            {
                switch (c)
                {
                case 'P':
                    n_p++;
                case 'A':
                    n_clss++;
                    break;
                }
            }
            if ((((float)n_p) / ((float)n_clss)) < MIN)
            {
                loc_sol += NAMES[i] + " ";
            }
        }
        if (loc_sol.size())
        {
            str_out += loc_sol.substr(0, loc_sol.size() - 1) + "\n";
        }
        else
        {
            str_out += "\n";
        }
    }
    cout << str_out;
    return 0;
}
