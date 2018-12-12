#include <bits/stdc++.h>
#define MAXM 1000000
#define MAXN 25


using namespace std;

int n, m, c;
int L[ MAXN ];
int Mem[ MAXN ][ MAXM ];

int S(int M, int i);

int  main(){
    /*
    ios_base::sync_sith_std( false );
    cin.tie( NULL );
    */

    cin>>c;
    while(c--){
        cin>>n>>m;
        for(int i= 0; i<n; i++)
            cin>>L[ i ];
        cout<<S( m, 0 );
    }


    return 0;
}


int S(int M, int i){
    int num = M/L[ i ];

    if( !M )    return num;

    int M2 = M%L[ i ], mini1 = S(M,i++), mini2 = MAXM+1, Saux;

    for(int j = i; j<n; j++)
        mini2 = min( mini2, S( M2, j) );

    return min( mini1, mini2);

}
