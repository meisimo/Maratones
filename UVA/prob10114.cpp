#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int C, N, i, m, j;
    double c, L, d, L_d;
    double Dep[110][2];

    while (cin >> C >> c >> L >> N && 0 <= C)
    {
        for (i = 0; i < N; i++)
            cin >> Dep[i][0] >> Dep[i][1];
        d = Dep[0][1];
        L_d = (L * (1.0 - d));
        N--;
        j = 1;
        cout<<"\n\n";
        for( i = 0; i < N ; i++){
            m = (int) Dep[i+1][0];
            d = 1 - Dep[i][1];
            while( j < m  && L_d < L){
                L_d *=  d;
                L -= c;
                cout<<"\n"<<j<<"\t"<<d<<"\t"<<L_d<<"\t"<<L<<endl;
                j++;
            }
        }
        d = 1 - Dep[i][1];
        L_d *= d;
        L -= c;
        cout<<"\n"<<j<<"\t"<<d<<"\t"<<L_d<<"\t"<<L<<endl;
    }

    return 0;
}

/*
30 500.0 15000.0 3
0 .10
1 .03
3 .002
12 500.0 9999.99 2
0 .05
2 .1
60 2400.0 30000.0 3
0 .2
1 .05
12 .025
-99 0 17000 1

*/