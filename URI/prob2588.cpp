#include <bits/stdc++.h>

using namespace std;

typedef unsigned unt;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int letter[26];
    unt L, i, tot;
    string str;
    bool comodin;

    while(cin>>str){
        memset(letter, 0, sizeof letter);
        tot = 0;
        L = str.size();

        for(auto c:str){
            letter[c-'a']++;
        }
        for(i=0; i<26; i++){
            if(letter[i]&1){
                tot++;
            }
        }
        if(tot){
            tot--;
        }
        cout<<tot<<endl;
    }

    return 0;
}
