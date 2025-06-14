#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int &i : v) cin >> i;
    sort(v.rbegin(), v.rend());
    int t = v[k - 1];
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] < t) break;
        else if (v[i] > 0) ans++;
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