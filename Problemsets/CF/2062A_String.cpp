#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    int ans = 0;
    for (char &c : s) {
        if (c == '1') ans++;
    }
    cout << ans << '\n';
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