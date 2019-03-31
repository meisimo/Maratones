#include <bits/stdc++.h>

using namespace std;

/*
    s = (b/2)^2-(a/2)^2, where |a|<|b|
*/

int main(){
    int a, b;
    long s;

    cin>>a>>b;

    if( abs(b)<abs(a) ) swap(a,b);

    s = (long)pow(b/2,2)-(long)pow(a/2,2) ;

    if( b<0 )   s = -s;

    cout<<s<<endl;

    return 0;
}
