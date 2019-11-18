#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, M, N, x, y;
    
    while(cin>>n && n){
        cin>>N>>M;
        while(n--){
            cin>>x>>y;
            if( x == N || y == M ) cout<<"divisa\n";
            else if ( N<x && M<y ) cout<<"NE\n";
            else if ( N<x && y<M ) cout<<"SE\n";
            else if ( x<N && y<M ) cout<<"SO\n";
            else                   cout<<"NO\n";
        }
    }
    return 0;
}

/*
3
2 1
10 10
-10 1
0 33
4
-1000 -1000
-1000 -1000
0 0
-2000 -1000
-999 -1001
0
*/