#include <bits/stdc++.h>
#define MAX 50
using namespace std;

typedef int unt;

bool En[MAX][MAX][2];
unsigned long long Smem[MAX][MAX];

unsigned long long S(int u, int v){
    if( (!u && !v) || v<0 || u<0 ){         return 0;}
    if( (!u && v==1) || (u==1 && !v) ){     return 1;}
    if(Smem[u][v]){                         return Smem[u][v];}

    int s = 0;
    if( En[u][v][0] ){
        s += S(u-1, v);
    }
    if( En[u][v][1] ){
        s += S(u, v-1);
    }

    Smem[u][v] = s;
    return  s;
}


int main(){
/*
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
*/
    unt T, x, y, i, j, N, u, v, D;
    char dir;
    pair<unt, unt> A, B;

    cin>>T;


    while(T--){
        for(i = 0; i<MAX; i++){
            for(j=0; j<MAX; j++){
                En[i][j][0] = 1;
                En[i][j][1] = 1;
                Smem[i][j]  = 0;
            }
        }

        cin>>N;
        cin>>x>>y;
        A = make_pair(x, y);
        cin>>x>>y;
        B = make_pair(x, y);

        cin>>D;
        while(D--){
            cin>>i>>j>>dir;
            switch(dir){
            case 'N':
                En[i][j+1][1] = 0;
                break;
            case 'E':
                En[i+1][j][0] = 0;
                break;
            case 'W':
                En[i][j][1] = 0;
                break;
            case 'S':
                En[i][j][0] = 0;
                break;
            }
        }


        B.first  = B.first-A.first;
        B.second = B.second-A.second;

        A.first  =  0;
        A.second =  0;



        cout<<S(B.first, B.second)<<"\n";
    }


    return 0;
}

/*
2
3
1 1
3 3
2
2 3 S
2 2 W
3
1 1
3 3
0

*/
