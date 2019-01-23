#include <iostream>

typedef unsigned long long ull;

using namespace std;

int main(){
    const ull MIN=60;
    const ull HOR=60*MIN;
    const ull DIA=24*HOR;

    string s1, s2;

    ull t1, t2;
    ull d, h, m, s;

    cin>>s1>>d;
    cin>>h>>s1>>m>>s2>>s;

    t1 = d*DIA + h*HOR + MIN*m + s;

    cin>>s1>>d;
    cin>>h>>s1>>m>>s2>>s;

    t2 = d*DIA + h*HOR + MIN*m + s;

    t2 -= t1;

    cout<<t2/DIA<<" dia(s)\n";
    t2 %= DIA;
    cout<<t2/HOR<<" hora(s)\n";
    t2 %= HOR;
    cout<<t2/MIN<<" minuto(s)\n";
    t2 %= MIN;
    cout<<t2<<" segundo(s)\n";

    return 0;
}
