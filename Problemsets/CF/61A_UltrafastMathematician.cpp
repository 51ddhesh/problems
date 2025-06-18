#include <bits/stdc++.h>
using namespace std;

void solve() {
    string a, b;
    cin >> a;
    cin >> b;
    string ans;
    int n = a.size();
    for (int i = 0; i < n; i++) {
        if (a[i] == b[i]) ans.push_back('0');
        else ans.push_back('1');
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    int t = 1; 
    // cin >> t;
    while (t--) solve();
    return 0;
}