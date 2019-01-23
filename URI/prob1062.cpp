#include <bits/stdc++.h>
#define MAX 1001

using namespace std;

int     A[MAX];
bool    v[MAX];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();

    int n, i, j;

    while( true ){
        cin>>n;
        if(!n)  break;

        while(true){
            cin>>A[0];
            if( !A[0] ) break;

            stack<int> stk;

            for( i=1; i<n; ){
                cin>>A[i];
                v[i++] = 0;
            }

            i=0;
            j=1;

            while( i<n ){
                while( j<=A[i] )    stk.push(j++);

                if( stk.top()==A[i] )   stk.pop();
                else if ( A[i]<stk.top() )  break;

                i++;
            }


            if(stk.empty()) cout<<"Yes\n";
            else            cout<<"No\n";
        }
        cout<<endl;
    }

    return 0;
}
