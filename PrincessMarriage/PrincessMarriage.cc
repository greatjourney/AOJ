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

int n,m;
pair<int,int> a[100000+10];

int solve() {
    int cnt = 0;
    int i = 0;
    while(i < n) {
        if(a[i].second < m) m -= a[i].second;
        else {
            cnt += a[i].first * (a[i].second - m);
            break;
        }
        i++;
    }
    for(int j = i+1; j < n; j++) {
        cnt += a[j].first * a[j].second;
    }
    return cnt;
}

int main() {
    while(cin >> n >> m && n > 0) {
        REP(i,n) cin >> a[i].second >> a[i].first;
        sort(a, a+n);
        reverse(a, a+n);
        cout << solve() << endl;
    }
}

# if 0 


#endif