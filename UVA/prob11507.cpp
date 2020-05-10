#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, i, hs, s;
    char c, cs, space, h;
    while (cin >> N && N)
    {
        cin.ignore(1);
        h = 'x';
        hs = 1;
        N--;
        for (i = 0; i < N; i++)
        {
            cin >> cs >> c;
            // cout<< cs<<c<<"\t";
            if( cs != 'N'){
                s = (cs == '+' ? 1 : -1);
                if( h == 'x' ){
                    h = c;
                    hs *= s;
                } else if ( h == c){
                    h = 'x';
                    hs *= (-s);
                }
                // cout <<"HEAD:"<< ( hs == 1 ? "+" : "-" ) << h << endl;
            }
        }
        cout <<( hs == 1 ? "+" : "-" ) << h << endl;
    }
    return 0;
}

/*
3
+z -z
3
+z +y
2
+z
4
+z +y +z
5
No +z No No
2
No
0

*/