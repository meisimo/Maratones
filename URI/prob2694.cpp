#include <bits/stdc++.h>

using namespace std;

typedef long long ll;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, x, tot;
    bool flag;
    stringstream num;
    string num_str, str;
    cin>>N;
    while(N--){
        cin>>str;
        flag = false;
        tot = 0;
        num_str = "";
        for(auto s: str){
            if('0'<=s && s<='9'){
                flag  = true;
                num_str += s;
            }else if(flag) {
                flag = false;
                num = stringstream(num_str);
                num >> x;
                tot += x;
                num_str = "";
            }
        }
        if(num_str.size()){
            num = stringstream(num_str);
            num>>x;
            tot+=x;
        }
        cout<<tot<<endl;
    }

    return 0;
}
