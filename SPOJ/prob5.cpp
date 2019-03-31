#include <bits/stdc++.h>

using namespace std;

inline int toInt(char a, char b){
    return (a-'0')*10+(b-'0');
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long T;
    string str;
    char a, b, i;
    bool f;
    int n, x, N, I, F;

    cin>>T;
    while(T--){
        cin>>str;

        f = true;
        N = str.length();
        I = n = (N>>1)-1;
        a = str[n];
        b = str[F = n +1+(N&1)];

        if( a==b ){
            if((N&1) && str[n+1]<'9' ){
                str[n+1]++;
                f = false;
            }
            else{
                while( I &&(a!='9'||b!='9') ){
                    I--;F++;
                    a = str[I];
                    b = str[F];
                }
            }
        }
        if(0<=I){
            if(f){
                x = toInt(a,b);
                for( i = a; toInt(i,i)<x; i++);

                str[n] = i;

                n += (N&1);
            }
            for(i=0; i<=n; i++)
                cout<<str[i];
            while(i--)
                cout<<str[i];
        }
        else{
            str = "1";
            N--;
            while(N--)  str+="0";
            str += "1";
            cout<<str;
        }
        cout<<endl;
    }


    return 0;
}
/*
2
808
2133
*/
