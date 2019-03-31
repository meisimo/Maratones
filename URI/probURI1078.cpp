#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    unsigned long long n, m,prod;
    string s = "", aux;

    cin>>n>>m;
    aux = to_string(n);
    prod = n;

    clock_t begin = clock();
    for (int i = 1; i<=m; i++)
        cout<<i<<" x "<<aux<<" = "<<i*n<<endl;
    clock_t end = clock();
    double e1 = double(end - begin);
    begin = clock();
    prod =n;
    for (int i = 1; i<=m; i++, prod+=n)
        cout<<i<<" x "<<aux<<" = "<<prod<<endl;
    end = clock();
    double e2 = double(end - begin);

    begin = clock();
    prod =n;
    for(int i =1; i<=m; i++, prod+=n){
        s += (to_string(i)+" x "+aux+" = "+to_string(prod)+"\n");
    }
    cout<<s;
    end = clock();
    double e3 = double(end - begin);
    cout<<"Time1: "<<e1<<endl;
    cout<<"Time2: "<<e2<<endl;
    cout<<"Time3: "<<e3<<endl;
    return 0;
}
