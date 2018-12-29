#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x, y;
    cin>>x;
    cin>>y;

    string Map[y];


    for(int i = 0; i<y; i++)
        cin>>Map[i];

    int i=0, j=0;
    bool found = false;


    if (Map[0].at(0)=='*')
        found = true;
    else if (Map[0].at(0)!='.') while( true ){
        if ( Map[i].at(j)=='x' )
            break;

        if( Map[i].at(j) =='>' ){
            Map[i].at(j)='x';
            j++;
            while( j<x && Map[i].at(j)=='.' ) j++;

            if( x<=j )  break;
            else if( Map[i].at(j)=='*' ){
                found = true;
                break;
            }
        }
        if( Map[i].at(j)=='v' ){
            Map[i].at(j)='x';
            i++;
            while( i<y && Map[i].at(j)=='.' ) i++;

            if( y<=i )  break;
            else if( Map[i].at(j)=='*' ){
                found = true;
                break;
            }
        }
        if( Map[i].at(j) =='<' ){
            Map[i].at(j)='x';
            j--;
            while( 0<=j && Map[i].at(j)=='.' ) j--;

            if( j<0 )  break;
            else if( Map[i].at(j)=='*' ){
                found = true;
                break;
            }
        }
        if( Map[i].at(j)=='^' ){
            Map[i].at(j)='x';
            i--;
            while( 0<=i && Map[i].at(j)=='.' ) i--;

            if( i<0 )  break;
            else if( Map[i].at(j)=='*' ){
                found = true;
                break;
            }
        }
    }
    cout<<((found)?"*":"!")<<endl;

    return 0;
}
/*
7
5
>.....v
>....v.
.>.*...
.^...<.
^.....<
*/
