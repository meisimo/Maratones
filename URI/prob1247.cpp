#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int d, vf, vg, x;
double a = sin(3);
    while(cin>>d>>vf>>vg){

        if(vf==vg){
            cout<<"S\n";
            continue;
        }

        x = vg*((double)d)/(vg-vf);
        cout<<x<<endl;
        if( 0<=x && x<=12.0 )   cout<<"S\n";
        else                    cout<<"N\n";
    }

    return 0;
}


/*
xg = vg*t
xf = vf*t+d

t  = d/(vg - vf)
x*(vg - vf) = vg*d
*/
