#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ull F[21];
    int a, b;

    F[0]=1;
    for(int i=1; i<21; i++) F[i] = F[i-1]*i;

    while(cin>>a>>b)
        cout<<(F[a]+F[b])<<endl;

    return 0;
}
