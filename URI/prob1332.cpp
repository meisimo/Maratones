#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T, r, r1;
    string s;

    cin>>T;
    while(T--){
        cin>>s;
        if(s.size()==5){
            r = 3;
        }
        else{
            r = (s[0] == 'o') + (s[1] == 'n') + (s[2] == 'e');
            r1 = (s[0] == 't') + (s[1] == 'w') + (s[2] == 'o');;
            if (r1<r)    r = 1;
            else        r = 2;
        }

        cout<<r<<endl;
    }

    return 0;
}
/*
4
owe
too
tno
theee
*/
