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
    map<string,int> table;
    string word, frequent, longest;
    size_t N = 0;
    while( cin >> word) {
        table[word] += 1;
        if (table[word] > N) {
            N = table[word];
            frequent = word;
        }
        if(word.size() > longest.size()) longest = word;
    }
    cout << frequent << " " << longest << endl;
}

# if 0 


#endif