#include <bits/stdc++.h>
#define MAX 4005

using namespace std;

map<string,int> M;
vector<int> adjs[MAX];
int V, E;

int BFS( int a, int b){
    queue<int> q;
    int level[V+2] = {0};

    q.push(a);
    while( !q.empty()&&q.front()!=b ){
        a = q.front(); q.pop();
        for(int u:adjs[a])
            if(!level[u]){
                level[u] = level[a]+1;
                q.push(u);
            }
    }
    return level[b];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int in, out, n=1, s=0;
    int *auxA, *auxB;
    string a, b;

    cin>>V>>E;


    for(int i=0; i<E; i++){
        cin>>a>>b;

        auxA = &M[a];
        auxB = &M[b];

        if( !*auxA ) *auxA = n++;
        if( !*auxB ) *auxB = n++;

        adjs[*auxA].push_back(*auxB);
        adjs[*auxB].push_back(*auxA);
    }

    s = BFS(M["Entrada"],M["*"]);
    s +=BFS(M["*"],M["Saida"]);

    cout<<s<<endl;
    return 0;
}
