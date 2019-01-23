#include <bits/stdc++.h>
#define MAX 52
using namespace std;

typedef unsigned long long ull;

pair<ull, ull> pegs[MAX];

bool sqr(ull x, int i){
    long double y = sqrt(x+pegs[i].second);
    return y==floor(y);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T, n, i;
    ull x = 1;

    n=1;
    while( n<=50 ){
        for( i = 1; i<=n; i++ )     if( sqr(x,i) ){
            pegs[i].second = x;
            break;
        }
        if( n<i ){
            n++;
            pegs[i].first = pegs[i].second = x;
        }
        x++;
    }

    cin>>T;

    while(T--){
        cin>>n;
        cout<<pegs[n+1].first-1<<endl;
    }

    return 0;
}
