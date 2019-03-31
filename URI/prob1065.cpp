#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int s=0, x;

    for(int i =0; i<5; i++){
        cin>>x;
        if( !(x%2) ) s++;
    }

    cout<<s<<" valores pares\n";

    return 0;
}


/*
7
-5
6
-4
12
*/
