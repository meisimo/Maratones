#include <bits/stdc++.h>

using namespace std;

double preCalc[11][11];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int i = 1, j = 1;
    int AT, EV1, EV2, D, aux, n, m;
    double sum;
    while(i<11){
        preCalc[i][0] = 1;
        j=1;
        while(j<11){
            preCalc[i][j] = i*preCalc[i][j-1];
            j++;
        }
        i++;
    }

    /*for(i=1; i<7; i++){
        for(j=1; j<11; j++){
            cout<<preCalc[i][j]<<"\t";
        }
        cout<<"\n";
    }*/

    while(true){
        cin>>EV1>>EV2>>AT>>D;
        if(!EV1){   break;  }
        sum = 0;
        aux = 6-AT;
        n = ceil(EV1/(float)D);
        m = ceil(EV2/(float)D);

        for(i=0; i<n; i++){
            sum += preCalc[6][n-i]*preCalc[aux][i];
        }
        sum = sum*preCalc[AT][m];
        sum = (sum/(preCalc[6][n]*preCalc[6][m]))*100;
        printf("%.2f\n",sum);
    }


    return 0;
}
