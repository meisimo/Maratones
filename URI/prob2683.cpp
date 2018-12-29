#include <bits/stdc++.h>
#define MAXE 1001
#define MAXV 1001

using namespace std;

typedef pair<int, pair<int,int> > pp;

int parent[MAXV];

void init(int n){
    while(n){
        parent[n] = n;
        n--;
    }
}

int findP(int i){
    if( parent[i]!=i )
        parent[i] = findP(parent[i]);
    return parent[i];
}

void unit(int a, int b){
    a = findP(a);
    b = findP(b);

    if(a!=b)
        parent[a] = b;
}

inline int first(pp A[], int i){
    return A[i].second.first;
}

inline int second(pp A[], int i){
    return A[i].second.second;
}

int main(){/*
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
*/
    int N, a, b, w, maxE = 0, aux, i;
    long long minW = 0 , maxW = 0;

    cin>>N;

    pp edges[N];

    for(i=0; i<N; i++){
        cin>>a>>b>>w;
        edges[i] = make_pair(w,make_pair(a,b));
        maxE = max(maxE,max(a,b));
    }

    init(maxE);
    aux = maxE-1;

    sort( edges, edges+N );

    i = 0;
    while( aux ){
        a = first(edges,i);
        b = second(edges,i);

        if( findP(a)!=findP(b) ){
           unit(a,b);
           minW += edges[i].first;
           aux--;
        }

        i++;
    }


    i = N-1;
    aux = maxE-1;
    init(maxE);
    while( aux ){
        a = first(edges,i);
        b = second(edges,i);

        if( findP(a)!=findP(b) ){
           unit(a,b);
           maxW += edges[i].first;
           aux--;
        }

        i--;
    }

    cout<<maxW<<endl<<minW<<endl;

    return 0;
}
