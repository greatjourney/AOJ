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

int t,n,k, x[100000+10], a[100000+10];

int solve() {
    int cnt = 0;
    sort(a, a + n - 1);
    REP(i, n - k) cnt += a[i];
    return cnt;
}

int main() {
    int t;
    cin >> t;
    REP(b,t) {
        cin >> n >> k;
        REP(i,n) cin >> x[i];
        REP(i,n - 1) a[i] = x[i+1] - x[i];
        cout << solve() << endl;
    }
}


# if 0 
発電機の数-1　の区間の電線を節約できる。長い区間から節約するのが最も効率が良いので
家の区間を小さい順に並べて、n - k番目まで足せば答えが求められる。
#endif
