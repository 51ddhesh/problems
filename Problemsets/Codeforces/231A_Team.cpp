#include <bits/stdc++.h>
using namespace std;

int a, b, c;

void solve() {
    int ans = 0;
    int n;
    cin >> n;
    while (n--) {
        cin >> a >> b >> c;
        if (a + b + c >= 2) ans++; 
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