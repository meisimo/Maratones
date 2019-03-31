#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    cin>>n;

    for(int i=((n%2)?0:1); i<12; i+=2 )
        cout<<n+i<<endl;

    return 0;
}
