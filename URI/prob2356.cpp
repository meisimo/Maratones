#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string D, S, str_out = "";

    while(cin>>D>>S){
        str_out += (D.find(S) != string::npos ? "Resistente":"Nao resistente");
        str_out += "\n";
    }
    cout << str_out;
    return 0;
}