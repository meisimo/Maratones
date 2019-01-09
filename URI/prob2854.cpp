#include <bits/stdc++.h>
#define MAX 301
using namespace std;

int cantS;
int parent[MAX];

void init(int n){
    cantS = n;
    while( n ){
        parent[n] = n;
        n--;
    }
}

int findP(int i){
    if( parent[i]!=i )
        parent[i] = findP(parent[i]);
    return parent[i];
}

void unit(int a, int b){
    a = findP(a);
    b = findP(b);

    if (a!=b){
        parent[a] = b;
        cantS--;
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    map<string,int> Map;
    int N, M, aux=1;
    string strA, strB, strC;
    int *a, *b;


    cin>>N>>M;
    init(N);
    for(int i=0; i<M; i++){
        cin>>strA>>strC>>strB;
/*
        if(!Map[strA])
            Map[strA] = aux++;
        if(!Map[strB])
            Map[strB] = aux++;
        unit(Map[strA],Map[strB]);
*/
        a = &Map[strA];
        b = &Map[strB];

        if ( !(*a) )
            *a = aux++;
        if ( !(*b) )
            *b = aux++;
/*
        for(auto it:Map){
            cout<<"{"<<it.first<<":"<<it.second<<"} ";
        }
        cout<<endl;
*/
        unit(*a,*b);
    }

    cout<<cantS<<endl;
}
