#include <bits/stdc++.h>
using namespace std;
typedef unsigned unt;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    bool flag;
    string str_out = "", s1, s2, s3;
    char c11, c12, c21, c22;
    unt T, N, i1, i2;
    cin>>T;

    cin.ignore(0);
    while(T--){
        flag = false;
        cin>>s1>>s2>>s3;
        i1 = s3.find('_');
        i2 = s3.find('_', i1+1);
        c11 = s1.at(i1);
        c12 = s1.at(i2);
        c21 = s2.at(i1);
        c22 = s2.at(i2);

        flag = ( (c11==c22) || (c12==c21) || (c11==c12) || (c21==c22));
        if(flag){
            str_out += "Y\n";
        }
        else {
            str_out += "N\n";
        }
    }
    cout<<str_out;
    return 0;
}
/*
2
sorte
torre
_or_e
norte
forte
_or_e
*/
