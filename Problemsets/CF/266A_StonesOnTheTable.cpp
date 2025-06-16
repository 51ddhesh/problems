#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0;
    if (n == 1) ans = 0;
    else if (n == 2) {
        if (s[0] != s[1]) ans = 0;
        else ans = 1;
    }
    else {
        for (int i = 1; i < n - 1; i++) {
            if (s[i - 1] == s[i] && s[i - 1] != s[i + 1]) ans++;
            else if (s[i] == s[i + 1] && s[i - 1] != s[i + 1]) ans++;
        }
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