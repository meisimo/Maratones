#include <bits/stdc++.h>
#define MOD 1000007

using namespace std;

typedef unsigned long long ull;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ull k, n;
    long T, i, ii;
    long f[500001];

    cin>>T;
    while(T--){
        cin>>k>>n;

        if( n<k ){
            cout<<n-1<<endl;
            continue;
        }

        for (i=0; i<k; i++)
            f[i] = i;

        f[i++] = (k*(k-1)>>1)%MOD;

        ii = i-k-1;
        while(i<n){
            f[i] = ((f[i-1]<<1) - f[ii] )%MOD;
            if (f[i]<0)
                f[i] += MOD;
            ii++;
            i++;
        }
        cout<<f[n-1]<<endl;
    }
    return 0;
}
/*
8
100000 1
2 1
2 5
7 5
7 10
8 64
10000 20000
100000 200000
*/
