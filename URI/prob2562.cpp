#include <bits/stdc++.h>
#define MAX 1001
using namespace std;

int setSize[MAX];
int parent[MAX];

void init(int n){
    for (int i = 1; i<=n; i++){
        setSize[i] = 1;
        parent[i] = i;
    }
}

int findParent(int i){
     parent[i] = ((parent[i]==i)?i:findParent(parent[i]) );
     return parent[i];
}

void unionFind(int x, int y){
    x = findParent(x);
    y = findParent(y);

    if(x!=y){
        parent[x] = y;
        setSize[y] += setSize[x];
    }
}

int sizeOfSet(int i){
    return setSize[findParent(i)];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, a, b;

    while((cin>>n>>m)){
        init(n);

        for (int i=0; i<m; i++){
            cin>>a>>b;
            unionFind(a,b);
        }

        cin>>a;

        cout<<sizeOfSet(a)<<"\n";
    }

    return 0;
}
