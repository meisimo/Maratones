#include <bits/stdc++.h>
#define MAX 50
using namespace std;

typedef unsigned unt;

int main(){
    /*
    ios::sync_with_stdio(0);
    cin.tie(0);
    */
    unt N, n1, n2, i, j, k;

    cin>>N;
    while(N--){
        char s1[MAX], s2[MAX], so[MAX*2] = "";
        cin>>s1>>s2;
        n1 = 0;
        n2 = 0;

        while(s1[n1++]);
        while(s2[n2++]);

        for(i=0, j=0, k=1; i<n1 && i<n2; i++, j+=2, k+=2){
            so[j] = s1[i];
            so[k] = s2[i];
        }
        j -= 2;
        if( i<n1 ){
            i--;
            for(; i<n1; i++, j++){
                so[j] = s1[i];
            }
        }
        else {
            i--;
            for(; i<n2; i++, j++){
                so[j] = s2[i];
            }
        }
        cout<<so<<endl;
    }
    return 0;
}
