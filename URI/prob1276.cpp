#include <bits/stdc++.h>

using namespace std;

typedef unsigned unt;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string str_out = "", str;
    unt l, N, i, j;
    char c;

    bool letters[26], h;

    while(getline(cin, str)){
        memset(letters, 0, sizeof letters);
        l = 0;
        N = str.size();

        for(i=0; i<N; i++){
            c = str.at(i);
            if(c!=' '){
                j = c-'a';
                if (!letters[j]){
                    letters[j] = 1;
                    l++;
                    if(l==26)   break;
                }
            }
        }

        if( l < 26){
            h = 0;
            j = 0;
            for(i=0; i<26; i++){
                if(!j && letters[i]){
                    j = i+1;
                } else if(j && !letters[i]){
                    j--;
                    str_out += ( h ? ", ":"")+ string(1,(char)(j+'a')) + ":" + string(1,(char)(i-1+'a'));
                    h = 1;
                    j = 0;
                }
            }
            if(j){
                j--;
                str_out += ( h ? ", ":"") + string(1,(char)(j+'a')) + ":z";
                j = 0;
            }
        } else {
            str_out += "a:z";
        }
        str_out+= "\n";
    }
    cout<<str_out;
    return 0;
}
