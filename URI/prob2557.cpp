#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string str_out = "", str1, str2, R, L, J;
    stringstream ss1, ss2;
    int r, l, j;

    while(cin>>str1){
        ss1 = stringstream(str1);
        getline(ss1, str2, '=');
        getline(ss1, J);
        ss2 = stringstream(str2);
        getline(ss2, R, '+');
        getline(ss2, L);
        
        if( L != "L"){
            ss1 = stringstream(L);
            ss1>>l;
        }
        if( R != "R"){
            ss1 = stringstream(R);
            ss1>>r;
        }
        if( J != "J"){
            ss1 = stringstream(J);
            ss1>>j;
        }

        if( J == "J"){
            str_out += to_string(r+l);
        } else if ( L == "L"){
            str_out += to_string(j-r);
        } else {
            str_out += to_string(j-l);
        }
        str_out += "\n";
    }
    cout<<str_out;
    return 0;
}

/*
3+8=J
5+L=5
R+7=5
*/