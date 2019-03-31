#include <bits/stdc++.h>

using namespace std;

inline bool is_odd(int x){
    return (x&1);
}

int main(){

    int n;

    cin>>n;

    if( is_odd(n) ) n--;

    for(int i=2; i<=n; i +=2 )
        cout<<i<<"^2 = "<<i*i<<endl;

    return 0;
}
