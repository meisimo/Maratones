#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, L, C, n_l, n_p, n_c, len, down, up, i;
    string str, word;

    while(cin>>N>>L>>C){
        cin.ignore(1);
        getline(cin, str);
        up = down = 0;
        n_l = n_p = 1;
        n_c = 0;
        for(i = 1; i < N; i++){
            up = str.find(" ", down);
            up++;
            len = up - down;
            if(n_c + len <= C){
                n_c += len;
            } else if(n_c + len - 1 <= C){
                n_c += len - 1;
            }  else if( n_l == L ){
                n_l = 1;
                n_c = len;
                n_p++;
            } else {
                n_l++;
                n_c = len;
            }
            down = up;
        }
        len = str.size() - up;
        if(n_c + len <= C){
            n_c += len;
        } else if( n_l == L ){
            n_l = 1;
            n_c = len;
            n_p++;
        } else {
            n_l++;
            n_c = len;
        }
        cout<<n_p<<endl;
    }
    return 0;
}
/*
14 4 20
Se mana Piedade tem casado com Quincas Borba apenas me daria uma esperanca colateral
16 3 30
No dia seguinte entrou a dizer de mim nomes feios e acabou alcunhando me Dom Casmurro
5 2 2
a de i de o
5 2 2
a e i o u

5 2 2
la li lu le lo
1000 30 70
In the beginning God created the heaven and the earth And the earth was without form and void and darkness was upon the face of the deep And the Spirit of God moved upon the face of the waters And God said Let there be light and there was light And God saw the light that it was good and God divided the light from the darkness And God called the light Day and the darkness he called Night And the evening and the morning were the first day And God said Let there be a firmament in the midst of the waters and
*/
