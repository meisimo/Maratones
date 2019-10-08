#include <bits/stdc++.h>

using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string str;
    char *c;
    int i = 0, len;
    while(getline(cin, str)){
        len = str.size();
        for(i = 0; i<len; i++){
           c = &str.at(i);
           if('A'<=*c && *c<='Z'){
                *c = (*c-'A'+13)%26+'A';
           } else if('a'<=*c && *c<='z'){
                *c = (*c-'a'+13)%26+'a';
           }
        }
        cout<<str<<endl;
    }
    return 0;
}
