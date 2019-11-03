#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T, count, i, N;
    string str_out = "", str;
    char c;
    bool letters[26], *point;

    cin >> T;
    cin.ignore(1);
    while (T--)
    {
        getline(cin, str);
        N = str.size();
        count = 0;
        memset(letters, 0, sizeof letters);
        for (i = 0; i < N; i++)
        {
            c = str.at(i);
            if ('a' <= c && c <= 'z')
            {
                point = &letters[c - 'a'];
                if (!(*point))
                {
                    count++;
                    *point = true;
                    if (count == 26)
                    {
                        break;
                    }
                }
            }
        }
        if(count == 26){
            str_out += "frase completa\n";
        } else if( 13 <= count){
            str_out += "frase quase completa\n";
        } else {
            str_out += "frase mal elaborada\n";
        }
    }
    cout << str_out;
    return 0;
}

/*

3
ola, como voce esta hoje
hoje fui na feira, e comprei banana, melao e abacates
ab  c def ghi jkl  mno  pqrt      s  tu vw xyz
*/