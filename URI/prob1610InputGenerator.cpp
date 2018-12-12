#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, V;
    int a, b;
    cin>>N>>V;
    cout<<"1\n";
    cout<<N<<" "<<V<<endl;
    std::mt19937 rng;
    rng.seed(std::random_device()());
    std::uniform_int_distribution<std::mt19937::result_type> dist6(1,N); // distribution in range [1, 6]

    while(V--){
        a = dist6(rng);
        while( (b = dist6(rng) )==a);
        std::cout << a << " " << b << std::endl;
    }

    return 0;
}
