#include <bits/stdc++.h>
#define MAX 50

using namespace std;

vector<int> A(MAX);

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, i, N;
    string s1 = "Discarded cards: ";
    string s2 = "Remaining card: ";

    while(true){
        cin>>a;

        if(!a)  break;

        queue<int> q;
        for(i=1; i<=a; i++)
            q.push(i);

        a--;
        N=a;
        i=0;
        while(a--){
            A[i++] = q.front();q.pop();
            q.push(q.front()); q.pop();
        }

        stringstream strm;

        copy( A.begin(), A.begin()+N, ostream_iterator<int>(strm, ", "));

        string sol = strm.str();
        sol[sol.length()-1] = '\0';
        sol[sol.length()-2] = '\0';

        cout<<s1<<sol<<endl;
        cout<<s2<<q.front()<<endl;
    }

    return 0;
}
/*
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
0
*/
