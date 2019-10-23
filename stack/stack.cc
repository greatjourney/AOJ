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

int main() {
    string word;
    stack<int> S;
    int a,b;
    while(cin >> word) {
        if (word == "+") {
            a = S.top(); S.pop(); b = S.top(); S.pop();
            S.push(a + b);
        }
        else if(word == "-") {
            a = S.top(); S.pop(); b = S.top(); S.pop();
            S.push(b - a);
        }
        else if(word == "*") {
            a = S.top(); S.pop(); b = S.top(); S.pop();
            S.push(a * b);
        }
        else if(word == "/") { 
            a = S.top(); S.pop(); b = S.top(); S.pop();
            S.push(b / a);
        }
        else {
            S.push(stoi(word));
        }
    }
    cout << S.top() << endl;
}

# if 0 
所要時間:20分
以前まではおそらく面倒な場合分けをして解いていたが、stackを使えばこんな簡単に
解けるのかと感動した。
#endif