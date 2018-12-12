#include <bits/stdc++.h>
#define INF 100001

using namespace std;

typedef unsigned unt;

struct crd{
    unt col, row;
    crd(){
        col = row = -1;
    }
    crd(unt i, unt j){
        col = j;
        row = i;
    }
};

struct node{
    unt w;
    vector<crd> adjs;
    node(){
        w = INF;
        adjs.clear();
    }
};

bool Field[100][100];
node Weights[100][100];
unt n, m, maxP;

void setW(unt w, crd c){
    Weights[c.row][c.col].w = w;
}


void addAdjs(crd c){
    unt iRow =((c.row)?c.row-1:0 ), fRow = ((c.row<n-1)?c.row+1:c.row);
    unt iCol =((c.col)?c.col-1:0 ), fCol = ((c.col<m-1)?c.col+1:c.col);
//    cout<<"\nBounds:\n("<<iRow<<","<<iCol<<")"<<"\n("<<fRow<<","<<fCol<<")\n";
    for(unt i=iRow ; i<=fRow ; i++){
        for(unt j=iCol; j<=fCol; j++ ){
            if ( (i==c.row&&j==c.col) || !Field[i][j] || Weights[i][j].w<INF)   continue;
            Weights[c.row][c.col].adjs.push_back(crd(i,j));
        }
    }

}

void maxPath(crd c){

    if( maxP < Weights[c.row][c.col].w )    maxP = Weights[c.row][c.col].w;
    if (Field[c.row][c.col])       addAdjs(c);
    Field[c.row][c.col] = 0;
    unt d = Weights[c.row][c.col].w+1;

    for (crd adj:Weights[c.row][c.col].adjs){
        if ( d >= Weights[adj.row][adj.col].w )
            continue;
        setW(d,adj);
        maxPath(adj);
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    unt T, i, j;
    crd zero;
    cin>>T;

    while(T--){
        maxP = 0;
        cin>>n>>m;
        for (i=0; i<n; i++)
            for(j=0; j<m; j++){
                cin>>Field[i][j];
                Weights[i][j] = node();
            }
        cin>>i>>j;
        zero = crd(i-1, j-1);

        setW(0, zero);
        maxPath(zero);

        cout<<maxP-1<<endl;
    }


    return 0;
}

/*
1
3 4
1 0 1 1
1 0 0 1
0 1 1 0
1 1
*/
