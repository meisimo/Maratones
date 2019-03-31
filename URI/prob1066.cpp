#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, odd, pos, neg;

    odd= pos= neg =0;
    for(int i =0; i<5; i++){
        cin>>a;
        if( a%2 ) odd++;
        if( 0<a )   pos++;
        else if ( a<0 ) neg++;
    }

    cout<<5-odd<<" valor(es) par(es)\n";
    cout<<odd<<" valor(es) impar(es)\n";
    cout<<pos<<" valor(es) positivo(s)\n";
    cout<<neg<<" valor(es) negativo(s)\n";

    return 0;
}
/*
-5
0
-3
-4
12
*/
