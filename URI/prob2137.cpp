#include <bits/stdc++.h>
#define MAX 1001

using namespace std;

typedef unsigned unt;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);


    unt N, i;
    string S[MAX];
    while(cin>>N){
        i = N;
        while(i--){
            cin>>S[i];
        }
        sort(S, S+N);
        i = 0;
        while(i<N){
            cout<<S[i++]<<endl;
        }
    }
    return 0;
}
