#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T, cant, n;
    string prod;
    float price, tot;

    cin>>T;
    while(T--){
        unordered_map<string,double> prices;
        tot = 0;

        cin>>n;
        while(n--){
            cin>>prod>>price;
            prices[prod] = price;
        }

        cin>>n;
        while(n--){
            cin>>prod>>cant;
            tot += cant*prices[prod];
        }

        printf("R$ %.2f\n",tot);
    }

    return 0;
}
