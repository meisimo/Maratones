#include <bits/stdc++.h>
#define INF 1<<30

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int E, V, i, a, b, w, f;

    while(true){
        cin>>V>>E;
        if(!V&&!E) break;

        V++;

        vector<int>   adjs[V];
        priority_queue<pair<int,int>>   q;
        unsigned long long cost[V];
        int parent[V];
        bool visited[V];
        int W[V][V];

        for(i=1; i<V; i++){
            for(a = 1; a<V; a++)    W[i][a] = INF;
            cost[i] = INF;
            visited[i] = 0;
        }

        for(i=0; i<E; i++){
            cin>>a>>b>>w;
            if( w < W[a][b] ){
                W[a][b] = W[b][a] = w;
                adjs[a].push_back(b);
                adjs[b].push_back(a);
            }
        }
        cin>>f;

        cost[1] = 0;
        parent[1] = 0;
        q.push({0,1});
        while(!q.empty()&&q.top().second!=f){
            a = q.top().second; q.pop();
            if(visited[a])  continue;
            visited[a] = 1;
            for(auto adj:adjs[a]){
                w = cost[a]+W[a][adj];
                if(w<cost[adj]){
                    parent[adj] = a;
                    cost[adj] = w;
                    q.push({-cost[adj],adj});
                }
            }
        }

        a = q.top().second;
        b = parent[a];

        if( cost[a]<120 )  cout<<"Will not be late.";
        else                cout<<"It will be "<<cost[a]-120<<" minutes late.";

        cout<<" Travel time - "<<cost[a]<<" - best way -";
        while(a){
            cout<<" "<<a;
            a = b;
            b = parent[a];
        }
        cout<<endl;
    }
    return 0;
}
/*
4 4
1 2 20
2 3 15
2 4 10
2 4 50
4
4 4
1 2 20
2 3 5
3 4 5
2 4 10
4
5 6
1 4 120
1 3 60
2 3 30
2 5 33
3 4 50
4 5 20
5
5 6
1 4 120
1 3 60
2 3 30
2 5 33
3 4 50
4 5 20
1
0 0
*/
