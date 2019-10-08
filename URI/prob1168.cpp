#include <bits/stdc++.h>
#define MAX 101

using namespace std;

typedef unsigned unt;

unt ledsito[] = {6,2,5,5,4,5,6,3,7,6};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    unt N, sum, i;
    char str[MAX];

    cin>>N;
    while(N--){
        sum = i = 0;
        cin>>str;
        while(str[i]){
            sum += ledsito[str[i]-'0'];
            i++;
        }
        cout<<sum<<" leds\n";
    }

    return 0;
}
