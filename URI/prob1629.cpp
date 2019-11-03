#include <bits/stdc++.h>

using namespace std;

typedef unsigned unt;

struct bit{
    unt b0: 1;
    unt b1: 1;
    unt b2: 1;
    unt b3: 1;
    unt b4: 1;
    unt b5: 1;
    unt b6: 1;
    unt b7: 1;
    unt b8: 1;
    unt b9: 1;
    unt b10: 1;
    unt b11: 1;
    unt b12: 1;
    unt b13: 1;
    unt b14: 1;
    unt b15: 1;
    unt b16: 1;
    unt b17: 1;
    unt b18: 1;
    unt b19: 1;
    unt b20: 1;
    unt b21: 1;
    unt b22: 1;
    unt b23: 1;
    unt b24: 1;
    unt b25: 1;
    unt b26: 1;
    unt b27: 1;
    unt b28: 1;
    unt b29: 1;
    unt b30: 1;
    unt b31: 1;
};

union num{
    unt x;
    bit b;
};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    num x;

    x.x = 7;
    cout<<x.x<<":\t"<<x.b.b31<<x.b.b30<<x.b.b29<<x.b.b28<<x.b.b27<<x.b.b26<<x.b.b25<<x.b.b24<<x.b.b23<<x.b.b22<<x.b.b21<<x.b.b20<<x.b.b19<<x.b.b18<<x.b.b17<<x.b.b16<<x.b.b15<<x.b.b14<<x.b.b13<<x.b.b12<<x.b.b11<<x.b.b10<<x.b.b9<<x.b.b8<<x.b.b7<<x.b.b6<<x.b.b5<<x.b.b4<<x.b.b3<<x.b.b2<<x.b.b1<<x.b.b0<<endl;
    x.x = 54782;
    cout<<x.x<<":\t"<<x.b.b31<<x.b.b30<<x.b.b29<<x.b.b28<<x.b.b27<<x.b.b26<<x.b.b25<<x.b.b24<<x.b.b23<<x.b.b22<<x.b.b21<<x.b.b20<<x.b.b19<<x.b.b18<<x.b.b17<<x.b.b16<<x.b.b15<<x.b.b14<<x.b.b13<<x.b.b12<<x.b.b11<<x.b.b10<<x.b.b9<<x.b.b8<<x.b.b7<<x.b.b6<<x.b.b5<<x.b.b4<<x.b.b3<<x.b.b2<<x.b.b1<<x.b.b0<<endl;
    x.x = 158309;
    cout<<x.x<<":\t"<<x.b.b31<<x.b.b30<<x.b.b29<<x.b.b28<<x.b.b27<<x.b.b26<<x.b.b25<<x.b.b24<<x.b.b23<<x.b.b22<<x.b.b21<<x.b.b20<<x.b.b19<<x.b.b18<<x.b.b17<<x.b.b16<<x.b.b15<<x.b.b14<<x.b.b13<<x.b.b12<<x.b.b11<<x.b.b10<<x.b.b9<<x.b.b8<<x.b.b7<<x.b.b6<<x.b.b5<<x.b.b4<<x.b.b3<<x.b.b2<<x.b.b1<<x.b.b0<<endl;
    x.x = 12345678910;
    cout<<x.x<<":\t"<<x.b.b31<<x.b.b30<<x.b.b29<<x.b.b28<<x.b.b27<<x.b.b26<<x.b.b25<<x.b.b24<<x.b.b23<<x.b.b22<<x.b.b21<<x.b.b20<<x.b.b19<<x.b.b18<<x.b.b17<<x.b.b16<<x.b.b15<<x.b.b14<<x.b.b13<<x.b.b12<<x.b.b11<<x.b.b10<<x.b.b9<<x.b.b8<<x.b.b7<<x.b.b6<<x.b.b5<<x.b.b4<<x.b.b3<<x.b.b2<<x.b.b1<<x.b.b0<<endl;
    x.x = 987654321;
    cout<<x.x<<":\t"<<x.b.b31<<x.b.b30<<x.b.b29<<x.b.b28<<x.b.b27<<x.b.b26<<x.b.b25<<x.b.b24<<x.b.b23<<x.b.b22<<x.b.b21<<x.b.b20<<x.b.b19<<x.b.b18<<x.b.b17<<x.b.b16<<x.b.b15<<x.b.b14<<x.b.b13<<x.b.b12<<x.b.b11<<x.b.b10<<x.b.b9<<x.b.b8<<x.b.b7<<x.b.b6<<x.b.b5<<x.b.b4<<x.b.b3<<x.b.b2<<x.b.b1<<x.b.b0<<endl;

    return 0;
}
