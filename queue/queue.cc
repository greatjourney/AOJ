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
}

int main() {
    queue<int> a;
    queue<string> b;
    int n,q;
    cin >> n >> q;
    int p;
    int cnt = 0;
    string s;
    REP(i,n) { 
        cin >> s >> p;
        a.push(p);
        b.push(s);
    }
    while (! a.empty()) {
        p = a.front();
        s = b.front();
        if (p <= q) {
            cnt += p;
            cout << s << " " << cnt << endl;
            a.pop(); b.pop();
        }
        else {
            cnt += q;
            a.pop(); b.pop();
            a.push(p - q);
            b.push(s);
        }
    }
}

# if 0 
所要時間10分
#endif