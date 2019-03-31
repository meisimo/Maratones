#include <bits/stdc++.h>
#define MAX 2000

using namespace std;

inline bool div_3(int num[], int n){
    int s = 0;

    while(n--)  s += num[n];

    return !(s%3);
}

inline bool div_4(int num[], int n){
    return !((10*num[n-2]+num[n-1])%4);
}

inline bool div_5(int num[], int n){
    return (!num[n-1]||num[n-1]==5);
}

inline bool div_11(int num[], int n){
    int a=0, b=0;

    for(int i=0; i<n; i +=2)    a += num[i];
    for(int i=1; i<n; i +=2)    b += num[i];
    return !(abs(a-b)%11);
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    int num[MAX], n;
    bool div3, div4, div5, div11, any;

    while(cin>>str){
        any = false;
        n = str.length();

        for(int i=0; i<n; i++)  num[i] = str[i]-'0';

        div3 = div_3(num, n);
        div4 = div_4(num, n);
        div5 = div_5(num, n);
        div11 = div_11(num, n);

        //cout<<div5<<"  "<<div11;

        if( div4 )          cout<<"This is leap year.\n";
        if( div5&&div3 )    cout<<"This is huluculu festival year.\n";
        if( div5&&div11&&div4 )   cout<<"This is bulukulu festival year.\n";
        if( !( div4 || (div5&&div3) ||(div5&&div11&&div4) ) )
                            cout<<"This is an ordinary year.\n";
        cout<<endl;
    }

    return 0;
}
