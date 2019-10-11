#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ANS(ans) cout << ans << endl
#define FLG(flg) if(flg) cout << "yes" << endl; else cout << "no" << endl;
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
    typedef unordered_set<string> set_t;
    set_t A;
    int n;
    cin >> n;
    string cmd,s;
    REP(i,n) {
        cin >> cmd >> s;
        if (cmd == "insert") {
            A.insert(s);
        }
        else {
            FLG(A.count(s))
        }
            
    }
}

# if 0 
#endif