#include <bits/stdc++.h>
#define MAX 20
#define PAT(x) " pathR(G,"<<x<<")"

using namespace std;

bool visited[MAX], exist[MAX];
bool adjs[MAX][MAX];
int n;
//vector<int> adjs[MAX];

void dfs(int i,string bsp){
    visited[i] = true;
    bsp += "  ";

//    for(int adj:adjs[i]){
    for(int adj=0; adj<n; adj++ ) if ( adjs[i][adj] ){
        cout<<bsp<<i<<"-"<<adj;
        if( visited[adj] ){
            cout<<endl;
            continue;
        }
        cout<<PAT(adj)<<endl;
        dfs( adj, bsp);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin>>N;

    for(int i=1; i<=N;i++){
        int v, a, b;

        cin>>n>>v;

        int j = n;
        while(j){
            visited[--j] = false;
            exist[j] = false;
//            adjs[j].clear();
            for(int k=0; k<n; k++)
                adjs[j][k] = false;
        }
        while(v--){
            cin>>a>>b;
 //           adjs[a].push_back(b);
            adjs[a][b] = true;
            exist[a] = true;
        }

        cout<<"Caso "<<i<<":\n";
        for(int node = 0; node<n; node++ )
            if(!visited[node]){
                dfs(node,"");
//                if ( adjs[node].size() )
                if (exist[node])
                    cout<<"\n";
            }
    }

    return 0;
}
