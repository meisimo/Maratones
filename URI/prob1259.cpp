#include <bits/stdc++.h>

typedef unsigned long unt;

using namespace std;

inline bool isOdd(unt x){
	return (x&((unt)1));
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	unt N, e=0, o=0, x, i=0;
	cin>>N;

//	unt even[N], odd[N];
    vector<unt> even(N), odd(N);

	while( N-- ){
		cin>>x;
		if( isOdd(x))
			odd[o++] = x;
		else
			even[e++] = x;
	}

	sort( even.begin(), even.begin()+e);
	sort( odd.begin(), odd.begin()+o);
    reverse( odd.begin(), odd.begin()+o);

	stringstream outE, outO;
	copy(even.begin() , even.begin()+e, ostream_iterator<unt>(outE,"\n"));
	copy(odd.begin() , odd.begin()+o, ostream_iterator<unt>(outO,"\n"));

	cout<<outE.str()<<outO.str();
/*
	for( i=0; i<e; i++)
		cout<<even[i]<<endl;
	while(o--)
		cout<<odd[o]<<endl;
*/
	return 0;
}
