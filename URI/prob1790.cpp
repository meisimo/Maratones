#include <bits/stdc++.h>
#define MAXN 51
#define MAXV 1251
using namespace std;

bool adjs[MAXN][MAXN];
int visited[MAXN];
bool inACycle[MAXN];
int n, nC;
/*
void dfs(int i, int l){
    cout<<"("<<i<<","<<l<<") ";
    visited[i] = l;
    l++;
    for(int adj=1; adj<=n; adj++) if (adjs[i][adj]){
        adjs[adj][i] = 0;
        if ( visited[adj] ){
            nC += (l-visited[adj]);
            continue;
        }
        dfs(adj,l);
    }
}
*/
/*
int dfs(int i){
    if(visited[i]){
        visited[i]++;
        return 0;
    }
    visited[i] = 1;

    int d, aux=1, N=0;
    bool c1 = false;

    for(int adj=1; adj<=n; adj++) if (adjs[i][adj]){
        adjs[adj][i] = 0;
        d = dfs(adj);

        if( d<=0 ){
            if (aux==visited[i])
                c1 = true;
            else
                aux = visited[i];
            N -= d;
        }
        else
            N += d;
    }

    cout<<"node:"<<i<<" c1:"<<c1<<" n:"<<N<<"\n";
    if(c1)
        return -N;
    return N+1;
}

int filter(int i){
    return dfs(i)-1;
}
*/
bool reachNodeA(int a, int i){

    for(int adj=1; adj<=n; adj++) if (adjs[i][adj]){
        adjs[adj][i] = 0;

        if ( adj==a ){
            inACycle[adj] = true;
            return true;
        }
        if ( reachNodeA(a,adj) ){

        }

    }
    return false;
}


int main(){
/*    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
*/
    int m, i, a, b, nV, S;
    while( cin>>n>>m ){
        nC = 0;

        for(a = 1; a<=n; a++){
            visited[a] = inACycle[a] =0;
            for( b=1; b<=n; b++)
                adjs[a][b] = false;
        }

        for(i=0; i<m; i++){
            cin>>a>>b;

            if( adjs[a][b] )    continue;

            adjs[a][b] = 1;
            adjs[b][a] = 1;

            nV++;
        }

        for(i=1; i<=n; i++)
            if (!visited[i])
//                dfs(i,1);
                nC += filter(i);
        cout<<endl<<nC<<"\n";

    }

    return 0;
}

/*
4 4
1 2
2 3
3 4
4 2
7 7
1 2
2 3
3 4
4 5
4 6
6 7
7 1
12 17
7 1
9 3
5 1
7 12
7 3
4 10
3 2
6 8
10 5
7 6
2 11
7 10
12 4
8 9
3 12
1 8
7 4
6 10
1 6
1 3
4 1
3 4
5 4
3 5
2 5
3 2
6 3
2 6
12 17
7 1
9 3
5 1
7 12
7 3
4 10
3 2
6 8
10 5
7 6
2 11
7 10
12 4
8 9
3 12
1 8
7 4
5 10
1 2
1 3
1 4
1 5
2 3
2 4
2 5
3 4
3 5
4 5
6 10
1 2
2 3
3 4
4 5
5 6
3 1
4 6
4 1
1 6
2 6
6 5
1 2
2 3
3 4
4 5
5 6
9 6
1 2
1 4
4 7
7 8
4 1
4 3
9 9
1 2
1 4
4 7
7 8
4 3
2 5
5 6
8 9
6 4
9 10
1 2
1 4
4 7
7 8
4 3
2 5
5 6
8 9
6 4
3 9
9 10
1 2
1 4
4 7
7 8
4 3
2 5
5 6
8 9
6 4
3 8
9 10
1 2
1 4
4 7
7 8
4 3
2 5
5 6
8 9
6 4
3 1
*/
