#include <bits/stdc++.h>

using namespace std;



int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	bool ans = 0;
	int n, k, a = 0, b, c, ones = 0, A[32], g_bit = 0, i;
	cin>>n>>k;
	
	if( k <= n ){
		for( i = 0; i < 32; i++){
			if( n & (1<<i)){
				A[i] = 1;
				ones++;  
				g_bit = i;
			} else {
				A[i] = 0;
			}
		}
		if ( ones <= k ){
			ans = 1;
			i = g_bit;
			do{
				a = A[i] + (a<<1);

				if ( A[i] ){
					ones--;
					A[i] = 0;
				}

				b = k - ones;
				i--;
			}while( (a<<1)<b );

			c = b - a;
			A[i+1] = a - c;
			A[i] += c<<1;
		}
	}

	if(ans){
		cout<<"YES\n";
		ones=0;
		for(i=0; i<=g_bit; i++){
			if(A[i]){
				while(A[i]){
					A[i]--;
					cout<<(ones?" ":"")<<(1<<i);
					ones = 1;
				}
			}
		}
		cout<<endl;
	} else {
		cout<<"NO\n";
	}
	return 0;
}