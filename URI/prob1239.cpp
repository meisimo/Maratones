#include <bits/stdc++.h>
using namespace std;
typedef unsigned unt;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    char c;
    bool flag_i =0, flag_b=0;
    unt i=0, j=0, N;
    string str, str_out = "";

    while(getline(cin, str)){
        i = j = 0;
        flag_i = flag_b=0;
    N = str.size();
    for(i=0; i<N; i++){
        c = str.at(i);
        if( c == '_'){
            if(flag_i){
                flag_i = false;
                str_out += str.substr( j, i-j) + "</i>";
            } else {
                flag_i = true;
                str_out += str.substr( j, i-j) + "<i>";
            }
            j = i+1;
        } else if( c == '*'){
            if(flag_b){
                flag_b = false;
                str_out += str.substr( j, i-j) + "</b>";
            } else {
                flag_b = true;
                str_out += str.substr( j, i-j) + "<b>";
            }
            j = i+1;
        }
    }
    str_out += str.substr(j);
    str_out += "\n";
    }
    cout<<str_out;
    return 0;
}
/*
You _should_ see the new walrus at the zoo!
Move it from *Accounts Payable* to *Receiving*.
I saw _Chelydra serpentina_ in *Centennial Park*.
_ _ __ _ yabba dabba _ * dooooo * ****
_now_I_know_*my*_ABC_next_time_*sing*it_with_me
*/
