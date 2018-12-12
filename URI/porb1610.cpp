#include <bits/stdc++.h>
#define MAX 10001

using namespace std;

bool visited[MAX], noHead[MAX];
vector<int> node[MAX];

bool dfs(int s){
    if ( visited[s])    return true;
    if ( noHead[s] )    return false;

    bool cicle = false;

    noHead[s] = visited[s] = 1;

    for(auto a:node[s] ){
        if (cicle)  break;
        cicle = dfs(a);
    }

    visited[s] = false;
    return cicle;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T, V, N, a, b;
    cin>>T;

    while(T--){
        bool cic, repeated;
        cin>>N>>V;

        for(int i = 0;i<N; i++){
            noHead[i] = visited[i]  = 0;
            node[i].clear();
        }
        while(V--){
            cin>>a>>b;
            a--;
            b--;
            repeated = false;
            for (auto x: node[a] )
                if( x==b ){
                    repeated = true;
                    break;
                }

            if(!repeated)
                node[a].push_back(b);

        }

        for(int i = 0; i<N; i++ ){
            if ( noHead[i] )       continue;
            if ( (cic=dfs(i)) )   break;
        }

        if( cic )   cout<<"SIM\n";
        else        cout<<"NAO\n";

    }

    return 0;
}

/*
ambar
1
4 12
2 3
3 4
4 2
1 3
2 3
3 4
2 4
1 3
2 3
3 4
1 3
*/
