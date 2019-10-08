#include <bits/stdc++.h>

using namespace std;

typedef unsigned unt;
typedef pair<unt,string> pus;


inline unt scoreMap(string raw_score){
    unt points = 0;
    for(char c: raw_score){
        points += (c == '1');
    }
    points += (raw_score[raw_score.size()-1] == '1');
    return points;
}

bool compare(pus p1, pus p2){
    if(p1.first > p2.first){
        return true;
    }
    else if (p1.first < p2.first){
        return false;
    }
    transform(p1.second.begin(), p1.second.end(), p1.second.begin(), ::tolower);
    transform(p2.second.begin(), p2.second.end(), p2.second.begin(), ::tolower);
    if(p1.second < p2.second){
        return true;
    }
    return false;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    unt N, test_case = 1, aux_score, aux;
    string input, raw_score;
    while(cin>>N){
        vector<pus> players(N);
        for(int i=0; i<N; i++){
            getline(cin, input, ';');
            aux =  input.size();
            if(input[0] == '\n')    input = input.substr(1, aux);
            if( input[aux] == '\n') input = input.substr(0, aux-1);

            aux_score = 0;
            for(int j = 0; j<4; j++){
                getline(cin, raw_score, ';');
                aux_score += scoreMap(raw_score);
            }
            getline(cin, raw_score, '\n');
            aux_score += scoreMap(raw_score);

            players[i] = make_pair(aux_score, input);
        }
        sort(players.begin(), players.end(), compare);
        cout<<"Case "<<test_case<<":\n";
        for(pus p: players){
            cout<<p.second<<" "<<p.first<<"\n";
        }
        test_case++;
    }


    return 0;
}

/*

3
Michael Jordan;0 1 1 0 1;0 1 1 0 1;0 1 1 0 1;0 0 0 0 1;0 0 0 0 1
Scotty Pippen;0 1 1 0 1;0 1 1 0 1;0 1 1 0 1;0 0 0 0 1;0 0 0 1 1
Charles Barkley;0 1 1 0 1;0 1 1 0 1;0 1 1 0 1;0 0 0 0 1;0 0 1 1 1
3
Michael;0 1 1 0 1;0 1 1 0 1;0 1 1 0 1;0 0 0 0 0;1 1 1 1 1
Scotty;0 1 1 0 1;0 1 1 0 1;0 1 1 0 1;0 0 0 0 0;1 1 1 1 1
Charles;0 1 1 0 1;0 1 1 0 1;0 1 1 0 1;0 0 0 0 0;1 1 1 1 1
3
Charles Barkley;0 1 1 0 1;0 1 1 0 1;0 1 1 0 1;0 0 0 0 1;1 1 1 1 1
Charle s Barkley;0 1 1 0 1;0 1 1 0 1;0 1 1 0 1;0 0 0 0 1;1 1 1 1 1
Charl es Barkley;0 1 1 0 1;0 1 1 0 1;0 1 1 0 1;0 0 0 0 1;1 1 1 1 1

*/
