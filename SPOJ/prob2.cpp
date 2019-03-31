#include <bits/stdc++.h>
#define MAX 100000000

using namespace std;

typedef unsigned long long  ull;

long long sieve[MAX];
ull primes[MAX];

inline int uPrime(ull a){
    if ( a<3 ) return 0;
    if ( !(a%2) )   a++;

    while( a<MAX ){
        if( 0<=sieve[a] ) return sieve[a];
        a+=2;
    }
    return -1;
}

inline int lPrime(ull b){
    if( b<3 )  return 0;
    if (!(b%2)) b--;

    if (b<MAX)
        while(b){
            if(0<=sieve[b])   return sieve[b];
            b-=2;
        }
    return -1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int nP=0;
    sieve[1] = -1;
    for(int i=2; i<MAX; i++){
        if ( 0<=sieve[i] ){
            sieve[i] = nP;
            primes[nP++] = i;
            for(int u= (i<<1); u<MAX; u+=i)
                sieve[u] = -1;
        }
    }

    int T, n;
    ull a, b;
    int lb=0, ub;
    bool flag;
    cin>>T;
    for(int m=0; m<T; m++){
        if(m)
            cout<<endl;
        cin>>a>>b;

        if ( a<=primes[nP-1] && b<=primes[nP-1]){
            lb = uPrime(a);
            ub = lPrime(b);
            while( lb<=ub )
                cout<<primes[lb++]<<endl;
        }
        else{
            if( a<=primes[nP-1] ){
                lb = uPrime(a);
                while( lb<nP)
                    cout<<primes[lb++]<<endl;
            }
            if( nP==lb)
                a = primes[nP-1]+2;

            if( !(a&(ull)1) )
                a++;
            if( !(b&(ull)1) )
                b--;
            while( a<=b ){
                flag = true;
                n = ceil(sqrt(a));
                for(int i = 0; i<=n; i++)
                    if( !(a%primes[i]) ){
                        flag = false;
                        break;
                    }
                if (flag)
                    cout<<a<<endl;
                a+=2;
            }
        }

    }
    return 0;
}

/*
5
100000000 100100000
100099981 100099981
999900000 1000000000
999999937 999999937
1000000000 1000000000
10
999900000 1000000000
999900000 1000000000
999900000 1000000000
999900000 1000000000
999900000 1000000000
999900000 1000000000
999900000 1000000000
999900000 1000000000
999900000 1000000000
999900000 1000000000
*/
