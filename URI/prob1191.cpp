#include <bits/stdc++.h>

using namespace std;

string pr, in;
unordered_map<char,int> index;
int m;

string S(int i, int j){
    string aux ="";
    cout<<i<<","<<j<<endl;
    if( i==j ){
            aux = " ";
            aux[0] = pr[i];
    }
    else if( j<i )  aux="";
    else{
        aux += S( i+1, index[pr[i]]);
        aux += S( index[pr[i]]+1,j );
        aux += pr[i];
    }
    cout<<"S("<<i<<","<<j<<")"<<"="<<aux<<endl;
    cin>>m;
//    return S( i+1, index[pr[i]]-1)+S( index[pr[i]]+1,j )+pr[i];
    return aux;
}

int main(){/*
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
*/
    int n;
    while(cin>>pr>>in){
        index.clear();
        n = in.length()-1;
        for(int i=0; i<=n; i++)
            index[in[i]] = i;

        cout<<S(0, n)<<endl;
    }

    return 0;
}
