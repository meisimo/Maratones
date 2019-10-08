#include <bits/stdc++.h>
#define MAX 100001
using namespace std;

inline void showList( list<int> l ){
    list<int> :: iterator it;
    for(it = l.begin(); it!=l.end(); ++it )
        cout<<"\t"<<*it;
    cout<<"\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string rawInput;
    list<int> input;
    list< list<int> :: iterator > head;
    list<int> :: iterator inputIt;
    list< list<int> :: iterator > :: iterator headIt, a1, a2, a3;
    int N, D, i, n;

    while(true){
        rawInput.clear();
        input.clear();
        head.clear();

        cin>>N>>D;
        if( !N )    break;
        
        cin>>rawInput;
        for(char c: rawInput)   input.push_back(c-'0');
        
        if( N==D ){
            cout<<0<<endl;
            continue;
        }

        if( 2<input.size() ){
            inputIt = input.begin();
            head.push_back(inputIt++);
            head.push_back(inputIt++);
            head.push_back(inputIt++);
/*
            for(headIt = head.begin(); headIt!= head.end();headIt++){
                cout<<"->"<<**headIt;
                if( **headIt == 0){
                    cout<<"(borrado!)";
                    input.erase( *(headIt) );
                }
            }
            cout<<"\n";
*/
/*
            i=0; 
            while( i<D && 2<input.size()){
                headIt = head.begin();
                a1 = headIt++;
                a2 = headIt++;
                a3 = headIt++;
                if( **a1<**a2 || ( **a1<=**a2 && **a2<**a3 ) ){
                    i++;
                    input.erase( *a1 );
                    if( *(head.begin()) == input.begin() ){
                        *a1 = *a2;
                        *a2 = *a3;
                        (*a3)++;
                    }
                    else{

                    }
                }
            }
*/
        }
        showList(input);
    }
    return 0;
}