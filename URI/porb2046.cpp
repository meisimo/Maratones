#include <bits/stdc++.h>

using namespace std;

struct point{
    int x, y;

    point(){
        x = 0;
        y = 0;
    }

    point(int x, int y ){
        this->x = x;
        this->y = y;
    }

    bool operator <(point const b){
        if(x<b.x)
            return true;
        if(x>b.x)
            return false;
        if(y<b.y)
            return true;
        return false;
    }

    void print(){
        cout<<x<<" "<<y;
    }
};

inline int distance(point a, point b){
    return abs(a.x-b.x)+abs(a.y-b.y);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int N, M, L, K, caso = 0, i, x, y;

    while( true ){
        cin>>N>>M;
        if ( N||M ){
            cin>>K;

            bool mark[N+1][M+1], R[N+1][M+1];
            point aux, best;
            int temp, dist;

            for(int i=1; i<=N; i++)
                for(int j=1; j<=M; j++)
                    R[i][j] = 0;

            for( i=0; i<K; i++){
                cin>>x>>y;
                R[x][y] = 1;
            }

            cin>>L;
            point C[L];
            for(int i=0; i<L; i++){
                cin>>x>>y;
                C[i] = point(x,y);
            }

            if (caso)
                cout<<endl;
            cout<<"Instancia "<<++caso<<endl;
            for(int i=0; i<L; i++){
                dist = 1<<30;
                best = point(1<<30,1<<30);

                queue<point> q;

                for(int k=1; k<=N; k++)
                    for(int j=1; j<=M; j++)
                        mark[k][j] = 0;

                x = C[i].x;
                y = C[i].y;

                mark[x][y] = 1;
                q.push(point(x,y));

                while(!q.empty()){
                    aux = q.front(); q.pop();

                    if( dist<distance(C[i],aux) )
                        continue;

                    if( R[aux.x][aux.y] ){
                        dist = distance(C[i],aux);
                        if( aux<best )
                            best = aux;
                    }

                    temp = aux.x-1;
                    if( temp && !mark[temp][aux.y] ){
                        mark[temp][aux.y] = 1;
                        q.push( point(temp,aux.y) );
                    }
                    temp = aux.y-1;
                    if( temp && !mark[aux.x][temp] ){
                        mark[aux.x][temp] = 1;
                        q.push( point(aux.x,temp) );
                    }
                    temp = aux.y+1;
                    if( temp<=M && !mark[aux.x][temp] ){
                        mark[aux.x][temp] = 1;
                        q.push( point(aux.x,temp) );
                    }
                    temp = aux.x+1;
                    if( temp<=N && !mark[temp][aux.y] ){
                        mark[temp][aux.y] = 1;
                        q.push( point(temp,aux.y) );
                    }
                }

                best.print();
                cout<<"\n";
            }
        }
        else
            break;
    }

    return 0;
}


/*
5 6
2
4 2
3 5
1
2 3
*/
