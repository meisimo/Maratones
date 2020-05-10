#include <bits/stdc++.h>
#define N 5

using namespace std;

typedef unsigned unt;

int main()
{
    /* 
    ios::sync_with_stdio(0);
    cin.tie(0);
    */
    string str, STR[N];
    int k, min_val, min_j, K[N], i, L, j;
    char c;

    memset(K, 0, sizeof K);

    cin >> str;
    cin >> k;
    cin.ignore(1);
    for (i = 0; i < N; i++)
        cin >> STR[i];

    L = str.size();
    for (i = 0; i < L; i++)
    {
        c = str.at(i);
        min_val = k;
        for (j = 0; j < N; j++)
        {
            if (c != STR[j].at(i))
            {
                K[j]++;
            }
            if (K[j] < min_val)
            {
                min_val = K[j];
                min_j = j;
            }
        }
        if (k < min_val)
        {
            break;
        }
    }
    if (k < min_val)
    {
        cout << "-1\n";
    }
    else
    {
        cout << (min_j+1) << endl
             << min_val << endl;
    }
    return 0;
}

/*
cbufllatkz
1
cbofllafkz
cbhflluteq
cbuzqzatmz
msrzlxaekz
xxxxxxxxxx
*/
