#include <bits/stdc++.h>
#define MAX 31705

using namespace std;

typedef unsigned long long ull;

bool sieve[MAX];
int prime[MAX];
unordered_set<int> S;

/*
    We generate a list of the sqrt(10^9) first primes from which we can create
    a sieve between a and b with not prime numbers, we store them in S. Then for
    the b-a numbers in the range we check if there are primes or not in average
    linear time.
*/

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T, a, b, i, u, p=0, lb;

    for( i=2; i<=MAX; i++){
        if( !sieve[i] ){
            prime[p++] = i;
            for( u=i<<1; u<=MAX; u+=i)
                sieve[u] = true;
        }
    }

    S.insert(1);

    cin>>T;
    while(T--){
        cin>>a>>b;

        //it creates a sieve between a and b, in the unordered_set S
        //O(p*log(a-b))
        for( i=0; i<p; i++ ){
            u = prime[i];
            lb = max(a/u,2);
            for(lb = lb*u; lb<=b; lb+=u)
                S.insert(lb);
        }

        //average O(a-b), because S.find() is average O(1)
        while(a<=b){
            if( S.find(a)==S.end() )
                cout<<a<<endl;
            a++;
        }
    }

    return 0;
}
