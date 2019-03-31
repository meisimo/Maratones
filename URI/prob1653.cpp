#include <bits/stdc++.h>

using namespace std;

/*
    A way to do it is making the tree of the expression and then print the
    reading by levels of the tree but reversed
*/

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T, n, a, b;
    char c;
    string exp, s;

    cin>>T;

    while(T--){
        queue<int> q;
        stack<int> stk;


        cin>>exp;

        s = "";
        n = exp.length();

        vector<int> adjs[n];

        for(int i=0; i<n; i++){
            if( exp[i]<'a' ){
                b = stk.top(); stk.pop();
                a = stk.top(); stk.pop();
                adjs[i].push_back(a);
                adjs[i].push_back(b);
            }
                stk.push(i);
        }

        q.push(n-1);
        while(!q.empty()){
            a = q.front(); q.pop();
            s = exp[a]+s;
            for(int u: adjs[a])
                q.push(u);
        }

    return 0;
}
