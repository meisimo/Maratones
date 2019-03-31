#include <bits/stdc++.h>
#define MAX 27
#define map(n) n-'a'
using namespace std;

vector<unsigned> adjs[MAX];
vector<unsigned> path[MAX];
bool visited[MAX];
unsigned nC;


void dfs(int n,string spc){
//    cout<<spc<<(char)(n+'a')<<endl;
    spc += "  ";
    visited[n] = true;
    for(auto adj:adjs[ n ]){
        if( visited[ adj ] )   continue;
        path[nC].push_back(adj);
        dfs(adj,spc);
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    unsigned T, i, E, V, a, b;
    char c1, c2;

    cin>>T;
    for(unsigned n=1; n<=T; n++){
        nC = 0;
        for(i=0; i<MAX; i++){
            visited[i] = false;
            adjs[i].clear();
            path[i].clear();
        }

        cin>>V>>E;
        for(i=0; i<E; i++){
            cin>>c1>>c2;
            a = map(c1);
            b = map(c2);
            adjs[a].push_back(b);
            adjs[b].push_back(a);
        }

        for(i=0; i<V; i++){
            if (visited[i]) continue;
            path[nC].push_back( i );
            dfs(i,"");
            nC++;
        }
        cout<<"Case #"<<n<<":\n";

        for(i=0; i<nC; i++){
            sort(path[i].begin(),path[i].end());
            for(unsigned a:path[i])
                cout<<(char)(a+'a')<<",";
            cout<<endl;
        }

        cout<<nC<<" connected components\n";
        cout<<endl;
    }


    return 0;
}

