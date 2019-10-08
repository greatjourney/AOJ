#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ANS(ans) cout << ans << endl
#define FLG(flg) if(flg) cout << "Yes" << endl; else cout << "No" << endl;
#define YES cout << "Yes" << endl;
#define NO cout << "No" << endl;
#define AN vector<int> a(n); for(int i = 0; i < n; i++) cin >> a[i];
#define IN  int n;  cin >> n;
#define VI  vector<int> 

long long cnt = 0;

int solve_zy(long long e) {
    int min = e;
    int y,z; 
    for(z = 0; z*z*z <= e; z++) {
        for(y = 0; y*y <= e - z*z*z; y++) {
            ++cnt;
            if (min >= e + y + z - y*y - z*z*z) min = e + y + z - y*y - z*z*z;
        }
    }
    return min;
}

int solve_xy(long long e) {
    int min = e;
    int x,y,z; 
    for(x = 0; x <= e; x++) {
        for(y = 0; y*y <= e - x; y++) {
            ++cnt;
            z = pow(e - x - y*y, 1.0/3);
            if ( min >= x + y +z) min = x + y + z;
        }
    }
    return min;
}

int main() {
    long long e;
    cout << "e," << "cnt" <<endl;
    while (cin >> e && e>0) {
        // cout << solve_zy(e) << endl; 
        // cout << "count = " << cnt << endl;
        solve_zy(e);
        // solve_xy(e);
        cout << e << "," << cnt << endl;
        // cnt = 0;
    }
}

# if 0
    x,y,zの動く範囲は　x:[0,E], y:[0,√E], z:[0,3√E] であるからもっとも自由度の低いzから値を決め
    ていけば一番調べる組み合わせは少なく済む。solve_zyではzから値を決め、y*y <= e - z*z*zとして
    yの範囲を決めた。yとzが決まればxは引き算で求まる。オーダーはO(e^1/3 * e^1/2) = O(e^5/6)
    Acceptされた。実行時間は00:15s	
    xから値を決めていくとx <= eよりxの自由度が大きくなるし、最後にzを求める時に1/3乗しなくてはならない。
    オーダーはO(e * e^1/2) = O(e ^ 3/2)。これだと時間がかかりすぎてAcceptされない。
    グラフはfigure.pngで添付した。青線がzy,オレンジがxy。
# endif