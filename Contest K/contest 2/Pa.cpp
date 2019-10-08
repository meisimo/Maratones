#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef unsigned unt;

unt Bars[21];

inline ull sumBars(unt n){
    ull p = 0;
    for(unt i=0; i<)

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    unt T, N, i;
    ull comb, j, L;
    bool existe;
    cin>>T;
    while(T--){
        cin>>L>>N;
        for( i=0; i<N; i++) cin>>Bars[i];

        comb = (1<<(N+1));
        existe = false;

        for( j=0; j<comb; j++)  if ( L==sumBars(j) ){
            existe = true;
            break;
        }
        cout<<(existe?"YES\n":"NO\n");
    }
    return 0;
}
