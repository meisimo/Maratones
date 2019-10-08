#include <bits/stdc++.h>

using namespace std;

typedef unsigned unt;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    unt N, x, n, i;
    string s1;

    cin>>N;
    while(N--){
        cin>>s1;
        cin>>x;

        n = s1.size();

        for(i = 0; i<n; i++){
            s1[i] = (s1[i]-x+'A')%26+'A';
        }
        cout<<s1<<endl;
    }
    return 0;
}
