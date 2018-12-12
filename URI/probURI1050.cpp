#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long sal, tax = 0;
    float sala;

    cin>>sala;

    sal = sala*100.0;

    if ( sal<=200000 )
        cout<<"Isento\n";
    else {
        if ( 450000<sal ){
            tax += ( sal-450000 )*28;
            sal = 450000;
        }
        if ( 300000<sal ){
            tax += (sal-300000)*18;
            sal  = 300000;
        }
        tax += (sal-200000)*8;

        printf("R$ %.2f\n", tax/10000.0);
    }
    return 0;
}
