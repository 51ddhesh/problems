#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n;
    int v[n];
    for (int i = 0; i < n; i++) cin >> v[i];
    cin >> k;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] >= k) ans++;
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    long long t = 1; 
    // cin >> t;
    while (t--) solve();
    return 0;
}