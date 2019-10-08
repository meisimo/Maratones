#include <bits/stdc++.h>

using namespace std;

typedef unsigned unt;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    unt N, i, len, tot;
    int dif;
    string s1, s2;
    cin>>N;
    while(N--){
        cin>>s1>>s2;
        len = s1.size();
        tot = 0;

        for(i=0; i<len; i++){
            dif = s2[i]-s1[i];
            tot = tot + ( 0<=dif ? dif : 26 + dif);
        }
        cout<<tot<<endl;
    }
    return 0;
}
