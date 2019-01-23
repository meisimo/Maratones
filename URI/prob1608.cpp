#include <bits/stdc++.h>
#define MAXI 101

using namespace std;

int ing[MAXI];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T, D, B, I, minC, auxC, i, index, n, nIng;

    cin>>T;
    while(T--){
        minC = 1<<30;

        cin>>D>>I>>B;

        for(i=0; i<I; i++)  cin>>ing[i];

        for(i=0; i<B; i++){
            cin>>nIng;

            auxC = 0;

            while(nIng--){
                cin>>index>>n;
                auxC += n*ing[index];
            }

            if(auxC<minC)   minC = auxC;
        }

        cout<<(D/minC)<<endl;

    }

    return 0;
}

/*
3

10 2 2

3 4

1 0 2

1 1 1

10 4 3

10 10 10 10

3 0 1 1 1 2 1

2 0 1 1 1

1 3 1

100 5 3

6 5 3 8 9

5 2 3 3 5 1 1 0 10 4 1

3 2 10 0 10 4 2

4 4 1 3 1 0 1 1 1
*/
