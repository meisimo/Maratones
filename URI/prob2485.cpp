#include <bits/stdc++.h>
#define INF 100001

using namespace std;

typedef int unt;

unt n, m;
bool Field[100][100];
unt Node[100][100];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    unt T, i, j, aux, ii, jj;
    unt zero;
    unt maxP;

    for (i=0, aux=0; i<100; i++, aux+=100)
        for( j=0; j<100; j++)
            Node[i][j] = aux+j;


    cin>>T;

    while(T--){
        maxP = 0;
        cin>>n>>m;

        vector<unt> adjs[10000];
        unt distance[10000];
        bool processed[10000];
        priority_queue<pair<int, unt>> q;

        for (i=0; i<n; i++)
            for(j=0; j<m; j++){
                cin>>Field[i][j];
                distance[Node[i][j]] = INF;
                adjs[Node[i][j]].clear();
            }

        for (i=0; i<n; i++)
            for(j=0; j<m; j++){
                if (Field[i][j]){
                    processed[Node[i][j]] = false;
                    for(ii=((i)?i-1:0); ii<=i+1;ii++){
                        if (n<=ii)  continue;
                        for (jj=((j)?j-1:0); jj<=j+1;jj++){
                            if( m<=jj||( ii==i && jj==j ))   continue;
                            adjs[Node[i][j]].push_back(Node[ii][jj]);
                        }
                    }
                }
            }


        cin>>i>>j;

        i--;
        j--;
        distance[Node[i][j]] = 0;
        q.push({0,Node[i][j]});

        int a, b;
        while(!q.empty()){
            a = q.top().second; q.pop();
            if (processed[a])   continue;
            processed[a] = true;
            for (auto adj:adjs[a]){
                b = adj;
                if( distance[a]+1 < distance[b] ){
                    distance[b] = distance[a]+1;
                    q.push({-distance[b],b});
                }

            }
        }

        for (i = 0; i<n; i++)
            for(j=0; j<m; j++)
                if ( Field[i][j] && maxP<distance[Node[i][j]])
                    maxP = distance[Node[i][j]];

        cout<<maxP<<endl;
    }


    return 0;
}

/*
2
3 4
1 0 1 1
1 0 0 1
0 1 1 0
1 1
4 3
1 1 1
1 0 1
1 0 1
1 1 1
2 1
*/
