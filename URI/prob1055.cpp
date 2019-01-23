#include <bits/stdc++.h>
#define MAX 51

using namespace std;


typedef pair<int,pair<int,int>> pp;

int A[MAX], v[MAX];
int parent[MAX];

void init(int n){
    while(n--)
        parent[n] = n;
}

int findP(int i){
    if(parent[i]!=i)
        parent[i] = findP(parent[i]);
    return parent[i];
}

void unit(int a, int b){
    a = findP(a);
    b = findP(b);

    if( a!=b ){
        parent[a] = b;
    }
}

bool same(int a, int b){
    return findP(a)==findP(b);
}

bool cmp(pp a, pp b){
    return a.first>b.first;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, w, s, i, T, n;

    cin>>T;
    for(int t=1; t<=T; t++){
        cin>>n;
        s = 0;

        init(n);

        for(i=0; i<n; i++){
            cin>>A[i];
            v[i]=0;
        }

        vector<pp> edges;

        for(i=0; i<n; i++)
            for(a=i+1; a<n; a++)
                edges.push_back(make_pair(abs(A[i]-A[a]),make_pair(i,a)));

        sort(edges.begin(), edges.end(), cmp);
/*
        for(auto e:edges)
            cout<<"("<<e.first<<",("<<A[e.second.first]<<","<<A[e.second.second]<<")) ";
        cout<<"\n";
        cout<<"\n";
*/
        i=0;
        for(auto e:edges){
            w = e.first;

            a = e.second.first;
            b = e.second.second;

            if( v[a]==2||v[b]==2 || same(a,b) )   continue;

//            cout<<"("<<e.first<<",("<<A[e.second.first]<<","<<A[e.second.second]<<")) ";

            unit(a,b);
            s += w;
            i ++;
            v[a]++;
            v[b]++;

            if( n-1<=i ) break;
        }
/*
        cout<<"\n";
        cout<<"\n";
*/
        cout<<"Case "<<t<<": "<<s<<endl;

    }

    return 0;
}

/*
3
4 4 2 1 5
4 1 1 1 1
2 10 1
*/
