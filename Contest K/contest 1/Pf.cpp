#include <bits/stdc++.h>
#define MAX 500

using namespace std;

typedef long long unt;
typedef unordered_map<string, unt> omap;

struct score{
    unt index  = 0;
    string name = "";
    unt points = 0;
    unt diff   = 0;
    unt goals  = 0;
    unt goal_v = 0;
};

bool compare(score s1, score s2){
    if( s1.points > s2.points ) return true;
    else if( s1.points < s2.points ) return false;

    if( s1.diff > s2.diff ) return true;
    else if( s1.diff < s2.diff ) return false;

    if( s1.goals > s2.goals ) return true;
    else if( s1.goals < s2.goals ) return false;

    if( s1.goal_v > s2.goal_v ) return true;
    else if( s1.goal_v < s2.goal_v ) return false;

    if( s1.name < s2.name ) return true;
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    unt N;
    string sep = " vs. ";
    unt len_sep = sep.size();

    while(cin>>N){
        string input1, input2, input, name_t1, name_t2;
        score aux_score1, aux_score2;
        unt aux, score_t1, score_t2, index, diff, index_t1, index_t2, paradox;

        vector<score> champ(MAX);
        vector<vector<int>> winners(MAX);

        paradox = 0;
        index = 1;
        omap mapita;

        getline(cin, input, '\n' );
        for(int i=0; i<N; i++){
            // READING THE INPUT
            getline(cin, input, '\n' );

            aux = input.find(sep);
            input1 = input.substr(0, aux);
            input2 = input.substr(aux+len_sep);

            aux = input2.find(" ");
            name_t2  = input2.substr(aux+1);
            score_t2 = stoi(input2.substr(0, aux));

            aux = input1.size();
            while(input1[--aux] != ' ');

            name_t1  = input1.substr(0, aux);
            score_t1 = stoi(input1.substr(aux+1));

            //STRUCTURING THE INPUT
            if(!mapita[name_t1]){
                champ[index].name = name_t1;
                champ[index].index = index;
                mapita[name_t1] = index;
                index++;
            }
            if(!mapita[name_t2]){
                champ[index].name = name_t2;
                champ[index].index = index;
                mapita[name_t2] = index;
                index++;
            }

            index_t1 = mapita[name_t1];
            index_t2 = mapita[name_t2];

            aux_score1 = champ[index_t1];
            aux_score2 = champ[index_t2];

            diff = abs(score_t2-score_t1);

            if(score_t1 < score_t2){
                winners[index_t2].push_back(index_t1);
                aux_score2.points += 3;
                //aux_score2.diff   += diff;
                //aux_score1.diff   -= diff;
            } else if(score_t2 < score_t1){
                winners[index_t1].push_back(index_t2);
                aux_score1.points += 3;
                //aux_score1.diff   += diff;
                //aux_score2.diff   -= diff;
            } else {
                aux_score1.points += 1;
                aux_score2.points += 1;
            }

            aux_score2.goals   += score_t2;
            aux_score2.goal_v  += score_t2;

            aux_score1.diff   += score_t1-score_t2;
            aux_score2.diff   += score_t2-score_t1;

            aux_score1.goals   += score_t1;

            champ[index_t1] = aux_score1;
            champ[index_t2] = aux_score2;
        }
        sort(champ.begin(), champ.begin()+index, compare );
        int positions[index];


        index--;
        for(int i = 0; i<index; i++){
            positions[champ[i].index] = i;
        }

        paradox = 0;
        for(int i = 1; i<=index; i++){
            for(unt loser:winners[i]){
                if(positions[loser] < positions[i]){
                    paradox++;
                }
            }
        }

        cout<<"The paradox occurs "<<paradox<<" time(s).\n";
        int i = 1;

        for(score a:champ){
            if(a.name.size()){
                //cout<<a.points<<"\t"<<a.diff<<"\t"<<a.goals<<"\t"<<a.goal_v<<"\t"<<a.name<<"\n";
                cout<<i<<". "<<a.name<<"\n";
                i++;
            }
        }
    }

    return 0;
}

