#include <bits/stdc++.h>
#define T "Bazinga!\n"
#define F "Fail!\n"
#define MAX 1000

using namespace std;

struct node{
    bool g1, g2;

    node(){
        g1 = g2 = 1;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, a;
    cin>>N;

    bool M[N][N], visited[N];
    node Nodes[N];
    vector<int> G1, G2;
    queue<int> q;

    for(int i=0; i<N; i++){
        visited[i] = 0;
        for(int j = 0; j<N; j++){
            cin>>M[i][j];
        }
    }

    for(int i=0; i<N; i++){
        q.push(i);
        while( !q.empty() ){
            a = q.front(); q.pop();

            for(int p=0; p<G1.size(); p++)
                if ( !M[a][G1[p]] ){
                    if( Nodes[G1[p]].g2 ){
                        G1.remove(p);
                        Nodes[p].g1 = 0;
                        Nodes[a].g2 = 0;
                    }
                    else
                        Nodes[a].g1 = 0;
                }
            if ( Nodes[a].g1 )
                G1.push_back(a);
            if ( Nodes[a].g2 ){
                for(int p=0; p<G2.size(); p++)
                    if ( !M[a][G2[p]] ){
                        if( Nodes[G2[p]].g1 ){
                            G2.remove(p);
                            Nodes[p].g2 = 0;
                            Nodes[a].g1 = 0;
                        }
                        else
                            Nodes[a].g2 = 0;
                    }
            }
            if (Nodes[a].g2)
                G2.push_back(a);

            if( visited[a] ) continue;
            for(int j = 0; a<N; a++)
                if ( j!=a && !M[a][j] )
                    q.push(j);
        }
    }


    return 0;
}
