#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    int n;

    while(cin>>str){
        n = 0;

        for(char c:str){
            if(c=='(')      n++;
            else if(c==')') n--;

            if( n<0 )       break;
        }

        if( n ) cout<<"incorrect\n";
        else    cout<<"correct\n";
    }

    return 0;
}
