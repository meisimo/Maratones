#include <bits/stdc++.h>

using namespace std;

typedef pair<int, bool> pib;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    unordered_map<char, pib> solved_set;

    int N, t, tot, n_sol;
    string ans, str_out = "";
    char P;
    pib *aux;
    while (true)
    {
        cin >> N;
        if (!N)
        {
            break;
        }
        cin.ignore(1);
        solved_set.clear();
        tot = n_sol = 0;
        while (N--)
        {
            cin >> P >> t >> ans;
            aux = &solved_set[P];
            if (!(aux->second))
            {
                if (ans == "incorrect")
                {
                    (*aux).first += 20;
                }
                else
                {
                    (*aux).first += t;
                    (*aux).second = true;
                }
            }
        }
        for (auto p : solved_set)
        {
            if (p.second.second)
            {
                n_sol++;
                tot += p.second.first;
            }
            // cout << p.first << " = " << (to_string(p.second.first)) << "," << (to_string(p.second.second)) << endl;
        }
        str_out += to_string(n_sol) + " " + to_string(tot) + "\n";
        // cout << endl;
    }
    cout << str_out;
    return 0;
}

/*
3
A 120 incorrect
A 130 incorrect
A 200 incorrect
5
A 100 correct
B 110 incorrect
B 111 correct
C 200 correct
D 300 incorrect
0
*/