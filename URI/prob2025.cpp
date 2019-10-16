#include <bits/stdc++.h>
#define MAX 100

using namespace std;
typedef unsigned unt;
typedef unsigned long long ull;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    unt T, i;
    string str_out = "", str, str_0 = "oulupukk";
    ull A1=999999937, A2=999999929, B1=999999893, B2=999999883, L;
    ull h1[MAX], h2[MAX], p1[MAX], p2[MAX], hash_01, hash_02;

    p1[0] = 1;
    p2[0] = 1;
    for(i=1; i<MAX; i++){
        p1[i] = (A1*p1[i-1])%B1;
        p2[i] = (A2*p2[i-1])%B2;
    }
    hash_02 = hash_01 = str_0.at(0);
    for(i=1; i<8; i++){
        hash_01 = (hash_01*A1+str_0.at(i))%B1;
        hash_02 = (hash_02*A2+str_0.at(i))%B2;
    }

    cin>>T;
    cin.ignore(0);
    while(T--){
        getline(cin, str);
        L = str.size();
            
        str_out += "\n";
    }
    cout<<str_out;
    return 0;
}