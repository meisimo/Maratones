#include <bits/stdc++.h>
#define MAX 35000
using namespace std;

typedef unsigned unt;
typedef unsigned ull;

bool sieve[ MAX ];
unt prime[ MAX ];

unt S(unt n){
    if ( n==1 || n== 2) return 1;
    return (S(n-1)+prime[n-1]-1)%n+1;
}

int main(){
    ios_base::sync_with_stdio( false );
    cin.tie( NULL );

    unt i, j, k;

    for ( j = 0, i = 2; i<MAX; i++){
        if ( sieve[i] ) continue;
        prime[j++] = i;
        for (k = i; k<MAX; k+=i )
            sieve[k] = true;
    }

    unt n;

    while( cin>>n ){
        if( !n )    break;
        j=0;
        i = 1;

        cout<<S(n)<<"\n";
    }

    return 0;
}

/*
1
2
3
4
5
6
7
8
9
0
*/
