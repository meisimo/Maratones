#include <bits/stdc++.h>
#define INV "INVALID DATA"

using namespace std;

typedef unsigned long long ull;
typedef unsigned unt;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);


    ull num;
    unt T;

    cin>>T;
    string str;
    stringstream ss;
    while(T--){
        num = 0;
        cin>>str;
        if(str.size()==20){
            if(str[0]=='R' && str[1] == 'A'){
                ss = stringstream(str.substr(2));
                ss>>num;
            }
        }

        if(num) cout<<num<<endl;
        else    cout<<INV<<endl;
    }
    return 0;
}
/*
8
RA0000000006000s0001
RA000000000000000100
RA000000000000012345
RA123456789012345678
RA999999999999999999
ra000000000000000333
RA12345
12345678901234567890
*/
