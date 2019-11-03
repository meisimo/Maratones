#include <bits/stdc++.h>
using namespace std;
typedef unsigned unt;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string str_out = "", word, key_word;
    unt T, n_things;
    set<string> S;
    set<string>::iterator it;

    cin>>T;
    while(T--){
        S.clear();
        cin>>n_things;
        while(n_things--){
            cin>>word;
            cin>>key_word;
            if (key_word == "chirrin" ){
                S.insert(word);
            }
            else if ( key_word == "chirrion"  ){
                it = S.find(word);
                if( it != S.end()){
                    S.erase(it);
                }
            }
        }
        str_out += "TOTAL\n";
        for(string s: S){
            str_out += s + "\n";
        }
    }
    cout<<str_out;
    return 0;
}

/*

2
4
sapo chirrion
bala charrin
vela chirrin
copo chirrin
3
galo chirrin
galo chirrion
raposa chirrin

*/
