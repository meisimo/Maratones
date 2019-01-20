#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char n;
    string str, s;
    bool zFlag;

    while(true){
        cin>>n>>str;
        if( n=='0' )  break;

        zFlag = 0;
        s = "";
        for(char d:str)
            if( d!=n ){
                if( zFlag )
                    s += d;
                else if ( d!='0' ){
                    zFlag = true;
                    s += d;
                }
            }
        if(s.length())
            cout<<s<<endl;
        else
            cout<<"0\n";
    }


    return 0;
}
