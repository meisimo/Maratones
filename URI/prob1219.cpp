#include <stdio.h>
#include <math.h>
#include <algorithm>

const double PI=3.1415926535897;

using namespace std;

int main(){

    double a, b, c, p, k;
    double A, B, C;

    while(scanf("%lf %lf %lf", &a, &b, &c)!=EOF){
        p = a+b+c;
        k = p/2.0;

        B = sqrt(k*(k-a)*(k-c)*(k-b));
        A = PI*pow( (a*b*c)/(4*B),2);
        C = PI*4.0*pow(B/p,2);

        printf("%.4f %.4f %.4f\n", A-B, B-C, C);
    }

    return 0;
}
