#include <bits/stdc++.h>
using namespace std;

const int M = 1e9 + 7;

void solve() {
    int n; cin >> n;
    int ans = 1;
    while(n--) {
        ans *= 2;
        ans %= M;
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}