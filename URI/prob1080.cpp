#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    unsigned long long n, Max = 0, imax;

    for(int i=1; i<=100; i++){
        cin>>n;
        if( Max<n ){
            Max = n;
            imax = i;
        }
    }

    cout<<Max<<endl<<imax<<endl;


    return 0;
}
