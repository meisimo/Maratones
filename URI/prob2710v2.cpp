#include <bits/stdc++.h>

using namespace std;

typedef long long ull;

ull M[501][501];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T, x1, y1, x2, y2, i, j ;
    ull v;
    char c;

    cin>>T;
    while(T--){

        cin>>c;

        if( c=='U' ){

            cin>>x1>>y1>>x2>>y2>>v;

            for( i=x1; i<=x2; i++)
                for( j=y1; j<=y2; j++)
                    M[i][j] += v;
        }
        else{
            cin>>x1>>y1;
            cout<<M[x1][y1]<<endl;
        }
    }

    return 0;
}
