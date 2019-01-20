#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    map<string,bool> lista;
    string name, ans;
    string listY="", listN="", frd="";
    const string End = "FIM", N = "NO";

    while(true){
        cin>>name;
        if ( name==End ) break;
        cin>>ans;

        if( ans==N )
            lista[name] = false;
        else{
            lista[name] = true;
            if( frd.length() < name.length())
                frd = name;
        }
    }

    for (auto it: lista)
    if ( it.second )
        listY += (it.first+"\n");
    else
        listN += (it.first+"\n");

    cout<<listY<<listN<<"\nAmigo do Habay:\n"<<frd<<endl;

    return 0;
}
