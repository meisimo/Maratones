#include <bits/stdc++.h>
#define MAX 501
using namespace std;

typedef unsigned long long ull;

ull M[MAX][MAX];

void printM(int n){
    for (int i=1; i<=n; i++){
        for(int j=1; j<=n; j++)
            cout<<M[i][j]<<" ";
        cout<<endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T, x1, y1, x2, y2;
    ull v;
    char c;

    while(cin>>T){
        for(int i = 500; i; i--)
            for(int j = 500; j; j--)
                M[i][j] = 0;
        while(T--){
            cin>>c;
            switch (c){
            case 'U':
                cin>>x1>>y1>>x2>>y2>>v;

                for(int i=y1; i<=y2; i++)
                    for(int j=x1; j<=x2; j++)
                        M[i][j] += v;

                break;
            case 'A':
                cin>>x1>>y1;
                cout<<M[y1][x1]<<endl;
                break;
            }
            //printM(10);
        }
    }

    return 0;
}
