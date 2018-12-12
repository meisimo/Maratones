#include <bits/stdc++.h>

using namespace std;

struct point{
    double x, y;

    point(double x, double y){
        this->x = x;
        this->y = y;
    }

    equal(point p){
        return p.x==x && p.y==y;
    }
};

inline int search(point P[], point p, int n ){
    for (int i = 0; i<n; i++)
        if ( p.equal(P[i]) )
            return i;
    return -1;
}

inline double dist(point p1, point p2){
    return sqrt(pow(p1.x-p2.x,2)+(p1.y-p2.y,2));
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T,n,i, x1, x2, nP;
    char y1, y2;
    point aux1, aux2;
    vector<pair<double, int>> grf[100];
    point P[100];

    cin>>T;

    while(T--){
        cin>>n;
        nP = 0;
        int j;
        for(i = 0; i<n; i++){
            cin>>y1>>x1>>y2>>x2;
            aux1 = point(x1,y1-'A');
            aux2 = point(x2,y2-'A');

            grf[] = make_tuple()
        }
    }


    return 0;
}
