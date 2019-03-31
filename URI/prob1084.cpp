#include <bits/stdc++.h>
#define MAX 100001
#define mp(i,j) make_pair(i,j)
using namespace std;

int A[MAX], Sol[MAX];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, D, M, i, j, top, maxi;
    char d;
    while(true){
        cin>>N>>D;
        
        if( !N )  break;

        for( i=0; i<N; i++ ){
            cin>>d;
            A[i] = d-'0';
        }

        maxi = 0;
        top = D+1;
        M = N-D;
        for(i=0; i<M; i++){
            j =  max(i,maxi);
            maxi = i;
            for( ; j<top; j++){
                if(A[maxi]<A[j]){
                    maxi = j;
                }
            }
            Sol[i] = A[maxi];
            A[maxi] = -1;
            top++;
        }
        for(i=0; i<M; i++)  cout<<Sol[i];
        cout<<endl;
    }

    return 0;
}