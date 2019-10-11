#include <bits/stdc++.h>
#include <unordered_set>
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

string s;
vector<string> a,b,cauchy_distribution;


int solve() {
    typedef unordered_set<string> set_t;
    set_t A;
    int cnt = 0;
    REP(i,s.size()) {
        REP(j,i) a.push_back(s[j]);
        FOR(j,i,s.size()) b.push_back(s[j]);
    }
    
}

int main() {
    int n;
    cin >> n;
    REP(i,n) {
        cin >> s;
    }
}

# if 0 


#endif