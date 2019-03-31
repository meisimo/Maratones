#include <bits/stdc++.h>

using namespace std;

vector<int> DX = {-2,-1,1,2};

inline bool valid(string x){
    return 'a'<=x[0]&&x[0]<='h'&&'1'<=x[1]&&x[1]<='8';
}

inline string gen_child(string x, int i, int j){
    return {x[0]+i,x[1]+j};
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string ini, fin, a, aux;
    int s;

    while(cin>>ini>>fin){
        queue<string> q;
        unordered_map<string, int> parent;

        s=0;
        q.push(ini);
        parent[ini] = 0;

        while(!q.empty() && q.front()!=fin){
            a = q.front(); q.pop();

            s = parent[a]+1;
            for(int i:DX)   for(int j:DX) if( abs(i)+abs(j)==3 ){
                aux = gen_child(a,i,j);

                if( valid(aux) && parent.find(aux)==parent.end() ){
                    //cout<<aux<<endl;
                    q.push(aux);
                    parent[aux] = s;
                }
            }
        }

        cout<<"To get from "<<ini<<" to "<<fin<<" takes "<<parent[fin]<<" knight moves.\n";
    }

    return 0;
}

/*
e2 e4
a1 b2
b2 c3
a1 h8
a1 h7
h8 a1
b1 c3
f6 f6
*/

