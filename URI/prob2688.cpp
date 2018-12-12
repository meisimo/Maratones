#include <bits/stdc++.h>

using namespace std;

struct coord{
    int r, c;

    coord(int r, int c){
        this->r = r;
        this->c = c;
    }
};

int M[13][13];
int S[13][13];

inline void show(){
    for (int i=0; i<13; i++){
        for (int j = 0; j<13; j++)
            printf("%4d",M[i][j]);
        printf("\n");
    }
}

inline bool crit(int h, int i, int j){
    int n= 0, sum = 0;

    for(int ii = i-1; ii<=i+1; ii++)
        for(int jj = j-1; jj<=j+1 && jj<13; jj++){
            if ( ii==i&& jj==j )  continue;
            sum += S[ii][jj];
            n++;
        }
    return sum<h*n;
}

bool comp(coord c1, coord c2){
    return M[c1.r][c1.c]<M[c2.r][c2.c];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int cols[4] = {5,4,2,1};
    int rows[4] = {7,8,10,11};
    int i,j = 0;

    for( int c:cols ){
        M[1][c] = j;
        for ( i = 2 ; i<12; i++)
            M[i][c] = M[i-1][c]+1;
        j++;
    }

    j = 6;
    for( int r: rows){
        if (j==8)   j = 10;
        M[r][7] = j++;
        for( i = 8; i<13; i++)
            M[r][i] = M[r][i-1]+1;
    }

    vector<coord> chrs;
    int h;

    cin>>h;

    for(i = 0; i<13; i++)
        for(j=0; j<13; j++){
            cin>>S[i][j];
            if ( S[i][j] ) continue;
            chrs.push_back(coord(i,j));
        }

    sort(chrs.begin(),chrs.end(),comp);

    for(coord co:chrs)
        if( crit(h, co.r, co.c) ){
            cout<<"linha > "<<co.r+1<<" coluna > "<<co.c+1<<"\n";
            break;
        }


    return 0;
}
