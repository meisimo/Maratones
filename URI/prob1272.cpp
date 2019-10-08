#include <bits/stdc++.h>

using namespace std;

typedef unsigned unt;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s, word;
    stringstream ss;
    char out[50];
    int T;
    unt i;

    cin>>T;
    while(T--){
        i = 0;
        memset(out, 0, sizeof out);
        getline(cin, s);
        ss = stringstream(s);

        while(getline(ss,word,'·')){
            cout<<word<<endl;
            out[i++] = word.at(0);
        }
        cout<<out<<endl;
    }
    return 0;
}
