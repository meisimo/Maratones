#include <bits/stdc++.h>
#define MAX 49
using namespace std;

int parent[MAX];
int sizeP[MAX];

void init(int n){
    while(n--){
        parent[n] = n;
        sizeP[n] = 0;
    }
}

int findP(int i){
    if(parent[i]!=i)
        parent[i] = findP(parent[i]);
    return parent[i];
}

void unit(int a, int b){
    a = findP(a);
    b = findP(b);

    if( a!=b ){
        parent[a] = b;
        sizeP[b] += sizeP[a]+1;
    }
}

inline int findSize(int i){
    return sizeP[findP(i)];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T, a, b, strt, V, E;

    cin>>T;
    while(T--){
        cin>>strt;
        cin>>V>>E;

        init(V);

        while(E--){
            cin>>a>>b;
            unit(a,b);
        }

        cout<<findSize(strt)*2<<endl;
    }
}
