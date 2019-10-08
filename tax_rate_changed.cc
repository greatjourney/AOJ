#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ANS(ans) cout << ans << endl
#define FLG(flg) if(flg) cout << "Yes" << endl; else cout << "No" << endl;
#define COUT(s) cout << s << endl;
#define YES cout << "Yes" << endl;
#define NO cout << "No" << endl;
#define AN vector<int> a(n); for(int i = 0; i < n; i++) cin >> a[i];
#define IN  int n;  cin >> n;
#define VI  vector<int> 


int x,y,s;

int tax(double x,double a) {
    return (a * (100 + x)) / 100;
}

int tax_rate_changed(int x, int y, int s) {
    int maximum = 0;
    for (int i=1; i<=s; ++i)
        for (int j=i; x <= y ? (i+j<=s) : (j<=s); ++j)
            if (tax(x,i)+tax(x,j) == s) // (*)
                maximum = max(maximum, tax(y,i)+tax(y,j));
    return maximum;
}

int main() {
    while (cin >> x >> y >> s && x>0) {
        cout << tax_rate_changed(x,y,s) << endl; 
    }
}

# if 0
    tax関数でintで返すことで小数点を切り捨てたが、掛け算と割り算の順番によって
    丸め誤差によって値が変わって苦労した。
    実行時間00:20s	メモリ　3056 KB	
# endif
