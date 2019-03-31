#include <bits/stdc++.h>
#define MAXV 40000
#define MAXE 50000

using namespace std;

typedef pair<int,<pair<int,int>> pp;

int parent[MAXV];
pp Edges[MAXE];

void init(int n){
    while(n){
        n--;
        parent[n] = n;
    }
}

int findP(int i){
    if( parent[i]!=i)
        parent[i] = findP(parent[i]);
    return parent[i];
}

void unit(int a, int b){
    a = findP(a);
    b = findP(b);

    if( a!=b )
        parent[a] = b;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int V,E, a, b, w;
    long W;

    while(true){
        cin>>V>>E;

        if( !(V||E) )   break;
        W = 0;
        for(int i=0; i<E; i++){
            cin>>a>>b>>w;
            Edges[i] = make_pair(w,make_pair(a,b));
        }

        sort( Edges, Edges+E );

        init(V);

        for(int i=0; i<E; i++){
            if( findP(Edges[i].second.first)!=findP(Edges[i].second.second) ){
                unit(Edges[i].second.first,Edges[i].second.second);
                W += Edges[i].first;
            }
        }
        cout<<W<<endl;
    }
    return 0;
}
