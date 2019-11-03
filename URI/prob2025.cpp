#include <bits/stdc++.h>
#define MAX 100

using namespace std;
typedef unsigned unt;
typedef unsigned long long ull;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    unt T, i;
    ull c;
    string str_out = "", str, str_0 = "oulupukk";
    ull A1 = 3, A2 = 7, B1 = 97266349, B2 = 97266379, L;
    ull h1[MAX], h2[MAX], p1[MAX], p2[MAX], hash_01, hash_02, ph1, ph2;

    p1[0] = 1;
    p2[0] = 1;
    for (i = 1; i < MAX; i++)
    {
        p1[i] = (A1 * p1[i - 1]) % B1;
        p2[i] = (A2 * p2[i - 1]) % B2;
    }
    hash_02 = hash_01 = (ull)str_0.at(0);
    for (i = 1; i < 8; i++)
    {
        c = (ull)str_0.at(i);
        hash_01 = ((hash_01 * A1) % B1 + c) % B1;
        hash_02 = ((hash_02 * A2) % B2 + c) % B2;
    }
    cin >> T;
    cin.ignore(1);
    while (T--)
    {
        getline(cin, str);
        L = str.size();
        h1[0] = h2[0] = (ull)str.at(0);
        for (i = 1; i < L; i++)
        {
            c = (ull)str.at(i);
            h1[i] = (h1[i - 1] * A1 + c) % B1;
            h2[i] = (h2[i - 1] * A2 + c) % B2;
        }
        for (i = 8; i < L; i++)
        {
            ph1 = (h1[i] - (h1[i - 8] * p1[8]) % B1) % B1;
            ph2 = (h2[i] - (h2[i - 8] * p2[8]) % B2) % B2;
            // cout<<ph1<<","<<hash_01<<"\t"<<ph2<<","<<hash_02<<"\n";
            if (ph1 == hash_01 && ph2 == hash_02)
            {
                str[i - 8] = 'J';
                str[i + 1] = 'i';
            }
        }
        str_out += str + "\n";
    }
    cout << str_out;
    return 0;
}

/*
1
ooulupukkaosdia sdasdoulupukk oaidna sdaisdn asdoulupukk

1
Joulupukkl

2
Foulupukki mielellaan saa kirjetta. doulupukkA.
Joulupukku saapuu sinne huomenna. Joulupukke rakastaa sinua ja siskosi.
*/