#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, i, j, r, c;
    long s = 0;
    string input;
    stack<pair<int,int>> q;


    cin>>n>>m;

    bool M[n+2][m+2];

    i = n+2;
    while(i--){
        j = m+2;
        while(j--)  M[i][j] = 1;
    }

    for( i=1; i<=n; i++ ){
        cin>>input;
        for(j=1; j<=m; j++ ) if( input[j-1]=='.' ) M[i][j]=0;
    }
/*
    for(i=0; i<n+2; i++){
        for(j=0; j<m+2; j++)
            printf("%3d",M[i][j]);
        cout<<endl;
    }
*/

    for( i=1; i<=n; i++)
        for( j=1; j<=m; j++){
            if( !M[i][j] ){
                s++;

                q.push(make_pair(i,j));
                while( !q.empty() ){
                    r = q.top().first;
                    c = q.top().second;
                    q.pop();

                    if( !M[r-1][c] )    q.push(make_pair(r-1,c));
                    if( !M[r+1][c] )    q.push(make_pair(r+1,c));
                    if( !M[r][c-1] )    q.push(make_pair(r,c-1));
                    if( !M[r][c+1] )    q.push(make_pair(r,c+1));

                    M[r][c] = 1;
                }
            }
        }
    cout<<s<<endl;
    return 0;
}
/*
10 10
..........
ooooooooo.
........o.
.oooooo.o.
.o....o.o.
.o.oo.o.o.
.o.oooo.o.
.o......o.
.oooooooo.
..........

10 10
..........
ooooooooo.
........o.
.oooooo.o.
.o..o.o.o.
.o.oo.o.o.
.o.oooo.o.
.o......o.
.oooooooo.
..........
6 9
.ooo.ooo.
o...o....
.o.....o.
..o...o..
...o.o...
....o....
2 8
.o.o.o.o
o.o.o.o.
*/
