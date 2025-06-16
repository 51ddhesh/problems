#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    if (n & 1) {
        cout << n << ' ';
        for (int i = 1; i < n; i++) cout << i << ' ';
        cout << '\n';
    } else cout << -1 << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    long long t = 1; 
    cin >> t;
    while (t--) solve();
    return 0;
}