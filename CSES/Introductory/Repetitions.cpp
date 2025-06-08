#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s; cin >> s;
    int n = s.size();
    int ans = 1, curr = 1;
    if (n == 1) {
        cout << 1 << '\n';
    } else {
        for (int i = 0; i < n - 1; i++) {
            if (s[i] == s[i + 1]) {
                curr += 1;
                ans = max(ans, curr);
            }
            else curr = 1;
        }
        cout << ans << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
