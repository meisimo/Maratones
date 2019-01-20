#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x1, y1, x2, y2;

    while( true ){
        cin>>x1>>y1>>x2>>y2;
        if( !x1 ) break;

        if( x1==x2 && y1==y2)
            cout<<0<<endl;
        else if( x1==x2 || y1==y2 || (x1+y1)==(x2+y2) || (x1-y1)==(x2-y2))
            cout<<1<<endl;
        else
            cout<<2<<endl;
    }

    return 0;
}
