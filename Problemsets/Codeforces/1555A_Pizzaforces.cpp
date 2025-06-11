#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll n; 
    cin >> n;
    ll ans = max(6LL, n + 1);
    ans = ans / 2 * 5;
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    long long t = 1; 
    cin >> t;
    while(t--) solve();
    return 0;
}