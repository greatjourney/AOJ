#include <bits/stdc++.h>
using namespace std;

long long N, A[10010];

long long min() {
    long long min = A[0];
    for(int i = 0; i < N; i++) {
        if(min >= A[i]) min = A[i];
    }
    return min;
}

long long max() { 
    long long max = A[0];
    for(int i = 0; i < N; i++) {
        if(max <= A[i]) max = A[i];
    }
    return max;
}

long long  sum() {
    long long sum = 0;
    for(int i = 0; i < N; i++) sum+=A[i];
    return sum;
}

int main() {
    cin >> N;
    for (int i=0; i<N; ++i)
    cin >> A[i];
    cout << min() << " " << max() << " " << sum() << endl;
}

# if 0
    long longにしてなくて何回か通らなかったです。AtCoder感があって楽しかったです。
# endif

 