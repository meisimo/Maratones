#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int P, R, r, i = 0, best_R = 0;
    double price, best_price;
    string str, prop;

    while ((cin >> R >> P) && (P || R))
    {
        cin.ignore(1);
        best_R = 0;
        while (R--)
            getline(cin, str);
        while (P--)
        {
            getline(cin, str);
            cin >> price >> r;
            cin.ignore(1);
            if (best_R < r)
            {
                best_R = r;
                best_price = price;
                prop = str;
            }
            else if (best_R == r)
            {
                if (price < best_price)
                {
                    best_price = price;
                    prop = str;
                }
            }
            while ( r-- )
                getline(cin, str);
        }
        if(i)            
            cout<<endl;
        i++;
        cout<<"RFP #"<<i<<endl<<prop<<endl;
    }
    return 0;
}
/*

6 4
engine
brakes
tires
ashtray
vinyl roof
trip computer
Chevrolet
20000.00 3
engine
tires
brakes
Cadillac
70000.00 4
ashtray
vinyl roof
trip computer
engine
Hyundai
10000.00 3
engine
tires
ashtray
Lada
6000.00 1
tires
1 1
coffee
Starbucks
1.50 1
coffee
0 0

*/