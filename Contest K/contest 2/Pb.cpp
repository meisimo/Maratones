#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef unsigned unt;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ull x;
    unt n = 0;

    cin>>x;

    while(x){
        x &= (x-1);
        n++;
    }
    cout<<n<<"\n";

    return 0;
}
