#include <bits/stdc++.h>

using namespace std;

typedef unsigned long  ull;
typedef unsigned long long unt;

void show(ull L[], unt ini, unt fin ){
    cout<<"{";
    while(ini<=fin){
        cout<<L[ini];
        ini++;
    }
    cout<<"}\n";
}

unt *indices(ull *L, unt n, ull x, unt ini, unt fin ){
    unt *O, I[2]={ ini, fin}, i;
    ull sum = 0;
    O = I;

    for ( i = ini; i<=fin; i++)
        sum += L[i];

    while ( I[0]<n ){
        if ( sum==x ){
            return O;
        }
        if ( sum<x ){
            I[1] = (I[1]+1)%n;
            sum += L[I[1]];
        }
        else{
            sum -= L[I[0]];
            I[0]++;
        }
    }

    I[0] = -1;
    return O;
}


bool S(ull *L, unt n){
    unt med = 0;
    unt *I, ini1, ini2, fin1, fin2;

    for (unt i = 0; i<n; i++)
        med += L[i];

    if( med%2 ){
        return 0;
    }

    med>>=1;
    I = indices(L, n, med, 0, 0);

    ini1 = I[0];
    fin1 = I[1];

    if ( I[0]==(unt)-1 ){
        return 0;
    }

    I = indices( L, n, med, *(I), (*(I+1))+1 );
    ini2 = I[0];
    fin2 = I[1];

    if( I[0]==(unt)-1){
        return 0;
    }

    if( ini1==(fin2+1)%n ){
        return 0;
    }
    return 1;

}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie( NULL );

    unt n, i;
    cin>>n;

    ull L[n];

    for ( i=0; i<n; i++)
        cin>>L[i];

    if ( S(L,n) )
        cout<<"Y\n";
    else
        cout<<"N\n";

    return 0;
}

/*
8
3 3 4 2 6 2 2 2

4
14 16 15 15

4
1 1 1 81

6
3 7 7 3 10 10
*/
