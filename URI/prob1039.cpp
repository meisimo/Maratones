#include <bits/stdc++.h>

using namespace std;

struct point{
    int x, y;

    point(int x, int y){
        this->x = x;
        this->y = y;
    }

};

inline double dist(point a, point b){
    return sqrt(pow(a.x-b.x,2)+pow(a.y-b.y,2));
}

int main(){
    ios_base::sync_with_stdio(false),
    cin.tie(NULL);

    int r1,x1,y1,r2,x2,y2;

    while (cin>>r1>>x1>>y1>>r2>>x2>>y2){
        point h = point(x1,y1);
        point f = point(x2,y2);
        cout<< ( ( 0<=r1-dist(h,f)-r2)?"RICO\n":"MORTO\n");
    }

}
