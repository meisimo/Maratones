
#include <bits/stdc++.h>
#define MAX 35000
using namespace std;

typedef unsigned unt;
typedef unsigned ull;

bool sieve[ MAX ];
unt prime[ MAX ];

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

        queue<unt> q;
        for ( i = 1; i<=n; i++ )
            q.push(i);

        j=0;
        i = 1;
        while( q.size()>1){
            if( i%prime[j] ){
                q.push(q.front());
                i++;
            }
            else{
                j++;
                i=1;
            }
            q.pop();
        }

        cout<<q.front()<<"\n";
    }

    return 0;
}
