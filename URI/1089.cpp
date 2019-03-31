#include <bits/stdc++.h>

#define MAX 10000
using namespace std;

inline bool f(int x1, int x2, int x3){
    return (x1-x2)*(x2-x3)<0;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, s, i;
    int A[MAX];

    while(true){
        cin>>n;

        if(!n)  break;

        s=0;

        for( i=0; i<n; i++) cin>>A[i];
        for( i=2; i<n; i++) if( f(A[i-2],A[i-1],A[i]) ) s++;
/*
        cin>>*A>>*(A+1);
        for( i=2; i<n; i++){
                cin>>*(A+i);
                if( f(*(A+(i-2)),*(A+(i-1)),*(A+i)) ) s++;
        }
*/
        i--;

        if( f(A[i-1],A[i],A[0]) )   s++;
        if( f(A[i],A[0],A[1]) )     s++;

        cout<<s<<endl;
    }
    return 0;
}
