#include <bits/stdc++.h>
#define MAX 61
using namespace std;

typedef pair<int,pair<int,int>> pp;

int parent[MAX];

void init(int n){
    while(n){
        parent[n] = n;
        n--;
    }
}

int findP(int i){
    if(parent[i]!=i)
        parent[i] = findP(parent[i]);
    return parent[i];
}

bool unit(int a, int b){
    a = findP(a);
    b = findP(b);

    if(a!=b){
        parent[a] = b;
        return true;
    }
    return false;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int V, E, a, b, w, N, i, S;
    pp aux;
    cin>>V>>E;

    N = E;
    pp edges[E];
    init(V);

    while(E--){
        cin>>a>>b>>w;
        edges[E] = make_pair(w,make_pair(a,b));
    }

    sort(edges, edges+N);

    i = 0;
    S = 0;
    V--;
    while(V){
        aux = edges[i++];
        if( unit(aux.second.first, aux.second.second) ){
            V--;
            S += aux.first;
        }
    }

    cout<<S<<endl;
}
