#include <bits/stdc++.h>
#define MAX 100001
using namespace std;

bool visited[MAX];
int height[MAX];
vector<int> adjs[MAX];
int n1, n2, d, i, a, b, s;
stack<int> stk;

int dfs(int x){
    if (visited[x]) return height[x];

    visited[x] = true;
    int aux;

    for(int adj:adjs[x]){
        aux = dfs(adj);
        if( (x<=n1 && n1<adj)||(adj<=n1 && n1<x) )
            aux++;
        if ( height[x]<aux )
            height[x] = aux;
    }

    return height[x];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int aux, si;

    while(true){
        cin>>n1>>n2>>d;
        if(!(n1||n2||d))    break;

        n2 += n1;
        s = 0;
        for(i=1; i<=n2; i++){
            height[i] = visited[i] = false;
            adjs[i].clear();
        }

        for( i=0; i<d; i++){
            cin>>a>>b;
            adjs[a].push_back(b);
        }

        for( i=1; i<=n2; i++){
            if (visited[i]) continue;
            aux = dfs(i);
            if (s<aux){
                s = aux;
                si = i;
            }
            else if ( (si) && s==aux && ((si<=n1&&n1<i)||(i<=n1&&n1<si))){
                si = 0;
                s++;
            }
        }
        cout<<"\n";
        if (s)  cout<<s+2<<"\n";
        else    cout<<"3"<<"\n";

    }

    return 0;
}
