#include <bits/stdc++.h>

#define MAX 100000

using namespace std;

typedef unsigned long long ull;

ull h[MAX];

/*
    The trick is index[k], it has a pair (i,j) that is the subarray for which h[k]
    is a local minimum.
*/

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, i, m;
    ull maxH, aux;
    while(true){
        cin>>n;
        if(!n)  break;

        pair<int,int> index[n];
        stack<int> q;
        maxH = 0;
        m=n;

        for(i=0; i<n; i++)  cin>>h[i];

        q.push(0);
        for(i=1; i<n; i++){
            while(!q.empty() && h[i]<h[q.top()] ){
                index[q.top()].second = i;
                q.pop();
            }
            q.push(i);
        }
        while(!q.empty()){
            index[q.top()].second = n;
            q.pop();
        }

        n--;
        q.push(n);
        while(n--){
            while(!q.empty()&&h[n]<h[q.top()]){
                index[q.top()].first = n+1;
                q.pop();
            }
            q.push(n);
        }
        while(!q.empty()){
            index[q.top()].first = 0;
            q.pop();
        }

/*
        for(int i=0; i<m; i++)
            cout<<"("<<index[i].first<<","<<index[i].second<<") ";
        cout<<endl;
*/
        while(m--)  maxH = max(maxH,h[m]*(index[m].second-index[m].first));
        cout<<maxH<<endl;

    }

    return 0;
}
/*
7 2 1 4 5 1 3 3
4 1000 1000 1000 1000
0
*/
