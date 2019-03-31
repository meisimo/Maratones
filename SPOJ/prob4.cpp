#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    string str;
    stack<char> stk;

    cin>>T;
    while(T--){
            cin>>str;
            for(char c:str){
                if ( 'a'<=c && c<='z')
                    cout<<c;
                else if( c=='(');
                else if( c==')'){
                    cout<<stk.top();
                    stk.pop();
                }
                else
                    stk.push(c);
            }
            cout<<endl;
    }

    return 0;
}
