#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, Y, Y2, i, t, x;
    char c;
    string Cards[60];
    cin >> N;
    for(t =1 ; t<=N; t++)
    {
        Y2 = Y = 0;
        for(i = 0; i<52; i++)
            cin>>Cards[i];
        for( i = 0; i< 3 ; i++){
            c = Cards[i].at(0);
            x = ( '2' <= c && c <= '9' ? c - '0' : 10 );
            Y2 += ( 10 - x );
            Y += ( x + 1 );
        }
        Y += Y2;
        cout<<"Case "<<t<<": "<<Cards[Y-1]<<endl;
    }
    return 0;
}

/*
2
6C 2C 9C JC TC QC 8C 7C AC 5C 4C 3C HC AD KD QD JD TD 9D 8D 7D 6D 5D 4D 3D 2D AH KH
QH JH TH 9H 8H 7H 6H 5H 4H 3H 2H AS KS QS JS TS 9S 8S 7S 6S 5S 4S 3S 2S
AC KC QC JC TC 9C 8C 7C 6C 5C 4C 3C 2C AD KD QD JD TD 9D 8D 7D 6D 5D 4D 3D 2D AH KH
QH JH TH 9H 8H 7H 6H 5H 4H 3H 2H AS KS QS JS TS 9S 8S 7S 6S 5S 4S 3S 2S


*/