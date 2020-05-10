#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    long long a, b;

    cin>>n;
    while(n--){
        cin>>a>>b;
        cout<<(a == b ? "=\n" : (a > b ? ">\n" : "<\n"));
    }

    return 0;
}