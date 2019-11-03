#include <bits/stdc++.h>

using namespace std;

typedef unsigned unt;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string str0, tmp_str, STR[5];
    unt min_dis, i_min, k, i = 0, j, l, eq, aux, tmp_min;
    int L, tmp_L;

    cin>>str0>>k;
    while(i<5){
        cin>>STR[i++];
    }

    L       = str0.size();
    min_dis = k+1;
    i       = 0;

    while(i<5){
        tmp_str = STR[i++];
        tmp_L   = tmp_str.size();

        if(k < abs(tmp_L-L))  continue;

        L;
        tmp_L;
        unt M1[L+1], M2[L+1], *m1, *m2, *m_aux;

        m1 = M1;
        m2 = M2;
        for(j=0; j<=L; j++){
            m1[j] = j;
        }

        for(l=1; l<=tmp_L; l++){
            tmp_min = k+1;
            m2[0] = l;
            for(j=1; j<=L; j++){
                eq      = (str0.at(j-1) != tmp_str.at(l-1));
                aux     = min(m1[j-1],min(m1[j], m2[j-1])) + eq;
                tmp_min = min(tmp_min, aux);
                m2[j]   = aux;
            }
            if( k < tmp_min){
                break;
            }
            m_aux = m1;
            m1    = m2;
            m2    = m_aux;
        }
        if(aux < min_dis){
            min_dis = aux;
            i_min   = i;
        }
    }
    if( k<min_dis){
        cout<<"-1"<<endl;
    }
    else {
        cout<<i_min<<endl;
        cout<<min_dis<<endl;
    }
    return 0;
}

/*
cbufllatkz
5
cbofllafkz
cbhflluteq
cbuzqzatmz
msrzlxaekz
xxxxxxxxxx
*/
