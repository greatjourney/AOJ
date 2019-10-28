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

int n;
long long A[50];

int solve() {
    int cnt = 0;
    A[1] = 1;
    A[2] = 2;
    A[3] = 4;
    FOR(i,4,31) {
        A[i] = A[i-1] + A[i-2] + A[i-3];
    }
}

int main() {
    solve();
    int a = 0;
    while(cin >> n && n > 0) {
        if(A[n] % 3650 == 0) {
            a = A[n] / 3650;
            COUT(a)
        }
        else {
            a = A[n] / 3650;
            a++;
            COUT(a);
        }
    }
}

# if 0 
所要時間15分
よくある整数で割った商の小数点以下切り上げを求めろという実装
もっといい方法があるのではと思いながら毎回これで書いている。
#endif