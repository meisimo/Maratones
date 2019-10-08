#include <bits/stdc++.h>
#define MAX_WORD 100

using namespace std;

typedef unsigned unt;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string input, word;
    stringstream ss;
    char words[MAX_WORD];
    unt N, i, tot;
    char c1, c2;
    bool flag = 0;

    while(getline(cin, input)){
        ss = stringstream(input);
        flag = N = tot = 0;
        while(getline(ss, word, ' ')){  words[N++] = tolower(word[0]);}
        N--;
        for(i = 0; i<N; ){
            c1 = words[i++];
            c2 = words[i];
            if ( c1 == c2 ){
                if (!flag){
                    tot++;
                    flag = 1;
                }
            }
            else{
                flag = 0;
            }
        }
        cout<<tot<<endl;
    }
    return 0;
}
