#include <bits/stdc++.h>
#define MAX 30

/*  Rail Again... Tracing Movements */

using namespace std;

inline int h(char x){
    return x-'a';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, i, j;
    int M[MAX], out[MAX];
    char c;

    while(true){
        cin>>n;

        if(!n)  break;

        stack<int> stk;
        string s="";

        for(i=0; i<n; i++){
            cin>>c;
            M[ h(c) ] = i;
        }

        for( i=0; i<n; i++ ){
            cin>>c;
            out[i] = M[h(c)];
        }

        for(i=0; i<n; i++)  cout<<out[i]<<" ";

        cout<<endl<<endl;
        j=0;
        for( i=0; i<n; i++ ){

            while( j<=out[i] ){
                stk.push(j++);
                s = s+"I";
            }

            if( out[i]==stk.top() ){
                stk.pop();
                s = s+"R";
            }
            else if( out[i]<stk.top() ){
                s = s+" Impossible";
                break;
            }
        }

        cout<<s<<endl;

    }

    return 0;
}
