#include <bits/stdc++.h>
#define MAX 12

using namespace std;

typedef pair<int, int> pi;

int M[MAX][MAX], value[3] = {2,3,5};
vector<pi> moves={pi(-1,0),pi(0,1),pi(1,0),pi(0,-1)};

bool reachGoal(pi p){
    return M[p.first][p.second]<0;
}

pi son(int i , int j, int m, int c){
    if ( M[i][j]<0 ){
        cout<<"reached!\n";
            make_pair(i,j);
    }
    if( M[i+moves[m].first][j+moves[m].second]%value[c] )
        return make_pair(i+moves[m].first,j+moves[m].second);
    return make_pair(i,j);
}

void print(pi A, pi B, pi C, int n){
    for(int i =0; i<=n+1; i++){
        for(int j=0; j<=n+1; j++){
            if ( A==pi(i,j) )   cout<<"A ";
            else if ( B==pi(i,j) )   cout<<"B ";
            else if ( C==pi(i,j) )   cout<<"C ";
            else if ( !M[i][j] )     cout<<"# ";
            else if ( M[i][j]<0 )    cout<<"X ";
            else                     cout<<". ";
        }
        cout<<endl;
    }

}


int main(){/*
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
*/
    int T, s, n, j, i, Aa, Ab, Ba, Bb, Ca, Cb;
    char c;
    bool solFlag;
    pi A, B, C;

    cin>>T;

    for(int k=1; k<=T; k++){
        cin>>n;

        queue<pi> qA, qB, qC;
        int levelA[11][11];

        s = 0;
        solFlag = 0;
        for( j=0; j<n+2; j++)
            for( i=0; i<n+2;i++)
                M[j][i] = 0;

        for( i=1; i<=n; i++)
            for( j=1; j<=n; j++){
                cin>>c;
                switch(c){
                case 'A':
                    M[i][j] = 1;
                    A = pi(i,j);
                    break;
                case 'B':
                    M[i][j] = 1;
                    B = pi(i,j);
                    break;
                case 'C':
                    M[i][j] = 1;
                    C = pi(i,j);
                    break;
                case '.':
                    M[i][j] = 1;
                    break;
                case 'X':
                    M[i][j] = -1;
                    break;
                }
            }

        qA.push(A);
        qB.push(B);
        qC.push(C);
        levelA[A.first][A.second] = 0;

        while( (!qA.empty()||!qB.empty()||!qC.empty()) && !solFlag  ){

            cout<<"\nSONS OF *------------\n";
            print(qA.front(),qB.front(),qC.front(), n );
            cout<<"*----------------------*\n";
            if( !qA.empty() ){
                Aa = qA.front().first;
                Ab = qA.front().second;

                if(!reachGoal(qA.front()) ) M[Aa][Ab] *= value[0];

                qA.pop();
            }
            if( !qB.empty() ){
                Ba = qB.front().first;
                Bb = qB.front().second;

                if(!reachGoal(qB.front()) ) M[Ba][Bb] *= value[1];

                qB.pop();
            }
            if( !qC.empty() ){
                Ca = qC.front().first;
                Cb = qC.front().second;

                if(!reachGoal(qC.front()) )  M[Ca][Cb] *= value[2];

                qC.pop();
            }

            string F[] = {"up", "right", "down", "left"};

            for(int l=0; l<4; l++){
                cout<<F[l]<<"-->";
                A = son( Aa, Ab, l, 0 );
                B = son( Ba, Bb, l, 1 );
                C = son( Ca, Cb, l, 2 );

                if( A!=pi(Aa,Ab)||B!=pi(Ba,Bb)||C!=pi(Ca,Cb) ){
                    qA.push(A);
                    qB.push(B);
                    qC.push(C);

                    levelA[A.first][A.second] = levelA[Aa][Ab]+1;
                }

                solFlag = reachGoal(A)&&reachGoal(B)&&reachGoal(C);

                cout<<"level: "<<levelA[A.first][A.second]<<endl;
                print( A,B,C , n);
                cout<<solFlag<<" :"<<reachGoal(A)<<reachGoal(B)<<reachGoal(C)<<endl;

                if ( solFlag )  break;
            }
        }


        cout<<"Case "<<k<<": ";
        if( solFlag )   cout<<levelA[A.first][A.second]<<endl;
        else            cout<<"trapped\n";
    }
    return 0;
}

/*
1
7
.....#.
.......
.#B....
...A.#.
.CX....
.X.X.#.
.#.....
*/
