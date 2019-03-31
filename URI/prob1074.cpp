#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;

    cin>>n;

    while(n--){
        cin>>x;
        if(x){
            if( x&1 )   cout<<"ODD ";
            else        cout<<"EVEN ";

            if( x<0 )   cout<<"NEGATIVE\n";
            else        cout<<"POSITIVE\n";
        }
        else    cout<<"NULL\n";
    }

    return 0;
}
/*
4
-5
0
3
-4
*/
