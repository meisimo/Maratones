#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n= 0;
    float s=0;
    float a;
    for(int i=0; i<6; i++){
        cin>>a;
        if(0<a){
            s += a ;
            n++;
        }
    }
    printf("%d valores positivos\n%.1f\n",n,s/n);
}
