#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x, in=0, out=0;

    cin>>n;

    while(n--){
        cin>>x;
        if( 9<x&&x<21 ) in++;
        else            out++;
    }

    cout<<in<<" in"<<endl;
    cout<<out<<" out"<<endl;

    return 0;
}
