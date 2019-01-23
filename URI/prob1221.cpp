#include <iostream>
#include <vector>

using namespace std;

const int MAX = 50000;

vector<int> primes;
bool sieve[MAX];


inline bool is_prime(int i){
    if(i<MAX)   return !sieve[i];

    for(int p:primes)
        if( !(i%p) )
            return false;
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int i, j;

    for( i=2; i<MAX; i++){
        if( !sieve[i] ){
            primes.push_back(i);
            for(j = i<<1; j<MAX; j+=i)
                sieve[j] = true;
        }
    }

    cin>>j;
    while(j--){
        cin>>i;

        if( is_prime(i) )   cout<<"Prime\n";
        else                cout<<"Not Prime\n";

    }

    return 0;
}
