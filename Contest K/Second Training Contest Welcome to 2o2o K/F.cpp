#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, s=0;

	cin>>n;

	while(n){
		 n &= n-1;
		 s++;
	}

	cout<<s<<endl;

	return 0;
}