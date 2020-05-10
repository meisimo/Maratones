#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    unordered_map<char, char> Map;
    char a, b, *c;
    int N, M, i, L;
    string str_out = "", str;

    cin>>N>>M;
    cin.ignore(1);

    while(N--){
        cin.get(a);
        cin.get(*c);
        cin.get(b);
        cin.ignore(1);
        Map[a] = b;
        Map[b] = a;
    }
    while(M--){
        getline(cin, str);
        L = str.size();
        for(i = 0; i<L; i++){
            c = &str.at(i);
            a = Map[*c];
            if( a ){
                *c = a;
            }
        }
        //str_out += str + "\n";
        cout<<(str + "\n");
    }
    //cout<<str_out;
    return 0;
}

/*
5 4
w l
s m
e o
a \n
c z
mbs loww 2017
tozwbde ceoire
ifmuwdosinbm
iamuwdopinbm
*/
