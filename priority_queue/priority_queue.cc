#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ANS(ans) cout << ans << endl
#define FLG(flg) if(flg) cout << "Yes" << endl; else cout << "No" << endl;
#define YES cout << "Yes" << endl;
#define NO cout << "No" << endl;
#define COUT(s) cout << s << endl;
#define AN vector<int> a(n); for(int i = 0; i < n; i++) cin >> a[i];
#define IN  int n;  cin >> n;
#define VI  vector<int> 
#define SS stringstream ss;
#define SOLVE cout << solve() << endl;

int solve() {
    int cnt = 0;
}

int main() {
    string cmd; 
    int n; 
    priority_queue<int> Q;
    while (cin >> cmd && cmd != "end") {
        if (cmd == "insert") {
            cin >> n;
            Q.push(n);
        }
       else if (cmd == "extract") {
           cout << Q.top() << endl;
           Q.pop();
       }
    }
}

# if 0 

#endif