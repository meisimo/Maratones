#include <bits/stdc++.h>
using namespace std;
typedef unsigned unt;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string str_out = "", str, tmp_str;
    unt m[26];
    unt T, max_oc, L, i;
    int aux;
    char c;

    cin>>T;
    cin.ignore(1);
    while(T--){
        memset(m, 0, sizeof m);
        max_oc = 0;
        tmp_str = "";
        getline(cin, str);
        L = str.size();
        for(i=0; i<L; i++){
            c = tolower(str.at(i));
            if( 'a'<=c && c<='z' ){
                m[c-'a']++;
            }
        }
        for(i = 0; i<26; i++){
            c = 'a'+i;
            aux = m[i];
            if( max_oc < aux){
                max_oc = aux;
                tmp_str = "";
                tmp_str += c;
            }
            else if (max_oc == aux) {
                tmp_str += c;
            }
        }
        str_out += tmp_str + "\n";
    }
    cout<<str_out;
    return 0;
}

/*
3
Computers account for only 5% of the country's commercial electricity consumption.
Input
frequency letters
*/
