#include <bits/stdc++.h>
#define MAX 256

typedef unsigned char uchar;

using namespace std;

int priority[MAX];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    uchar c;

    for(c='a'; c<='z'; c++)
        priority[c] = -1;
    for(c='A'; c<='Z'; c++)
        priority[c] = -1;
    for(c='0'; c<='9'; c++)
        priority[c] = -1;

    priority['^'] = 6;
    priority['*'] = priority['/'] = 5;
    priority['+'] = priority['-'] = 4;
    priority['>'] = priority['<'] = priority['='] = priority['#'] = 3;
    priority['.'] = 2;
    priority['|'] = 1;
    priority['('] = priority[')'] = -2;

    string input;
    int prev = 0, current; // 1 (leter), -1 (op) , 2 ( "(" ) , 3 ( ")" )
    char error = 0;

    while(cin>>input){
        prev = error = 0;
        stack<uchar> stk;
        string sol = "";

        if( input.length()==1 ){
            if( priority[input[0]]==-1 ){
                error = 0;
                sol = input;
            }
            else if( priority[input[0]]==0 )
                error = 2;
            else
                error = 1;
        }
        else if ( 0<input.length() ){
            prev = 0;
            error  =    priority[ input[0] ]>0
                    ||  input[0]==')'
                    ||  priority[ input[input.length()-1] ]>0 
                    ||  input[input.length()-1]=='(' ;
            if (!error) for (uchar x: input){
                //Lexical error=2
                if(!priority[x]){
                    error = 2;
                    break;
                }
                //Syntacis error=1 
                else if ( priority[x]==-1 ){
                    if (prev == 1 || prev==3 ){
                        error = 1;
                        break;
                    }
                    prev = 1;
                }
                else if( x == '('){
                    if( prev == 3 || prev == 1 ){
                        error = 1;
                        break;
                    }
                    prev = 2;
                }
                else if( x==')'){
                    if( prev==2 || prev==-1 ){
                        error = 1;
                        break;
                    }
                    prev = 3;
                }
                else{
                    if ( prev==-1 || prev ==2 ){
                        error = 1;
                        break; 
                    }
                    prev = 2;
                }
            }

            if (!error) for(uchar x:input){
                if( priority[x]==-1 ){
                    sol += x;
                }
                else if (priority[x]==-2){
                    if( x == ')'){
                        while( !stk.empty() && stk.top() != '(' ){
                            sol += stk.top(); stk.pop();
                        }
                        if ( stk.empty() ){
                            error = 1; 
                            break;
                        }
                        stk.pop();
                    }
                    else 
                        stk.push(x);
                }
                else if( stk.empty() || priority[stk.top()]<priority[x] ){
                    stk.push(x);
                }
                else if( priority[stk.top()]==priority[x]){
                    sol += stk.top(); stk.pop();
                    stk.push(x);
                }
                else{
                    while( !stk.empty() && priority[x]<=priority[stk.top()] ){
                        if ( priority[stk.top()]!=-2 ) 
                            sol += stk.top(); 
                        stk.pop();
                    }
                    stk.push(x);
                }
            }

            if( !error ){/*
                if( stk.empty() )
                    error = 1;*/
                while( !stk.empty() ){
                    if ( priority[stk.top()] != -2 )
                        c = stk.top(); 
                    if( stk.top()!='(' )
                        sol += c;
                    else{
                        error = 1;
                        break;
                    }
                    stk.pop();
                }
            }

        }
        //cout<<input<<"\t\t:";
        if(error == 2)
            cout<<"Lexical Error!\n";
        else if( error==1 )
            cout<<"Syntax Error!\n";
        else
            cout<<sol<<endl;
    }
    return 0;
}
