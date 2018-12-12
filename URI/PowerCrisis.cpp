#include <bits/stdc++.h>

using namespace std;
typedef unsigned unt;

unt lastCity(unt N, unt m){
    queue<unt> q;

    for (unt i=1; i<=N; i++)
        q.push(i);

    unt i = 0;

    while( q.size()>1 ){
        if( i%m )
            q.push(q.front());
        q.pop();
        i++;
    }

    return q.front();
}


int main(){
        unt n, m;

        while ( cin>>n && n ){
            m = 0;

            while ( 13!=lastCity( n, ++m) );

            cout<<m<<"\n";
        }

        return 0;
}
