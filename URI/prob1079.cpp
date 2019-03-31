#include <bits/stdc++.h>
#define w(x,y,z) (x*2.0+y*3.0+z*5.0)/10.0

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    float x, y, z;
    cin>>T;
    while(T--){
        cin>>x>>y>>z;
        printf("%.1f\n",w(x,y,z));
    }
    return 0;
}
