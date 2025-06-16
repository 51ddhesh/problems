#include <bits/stdc++.h>
using namespace std;

void solve() {
    string a, b;
    cin >> a >> b;
    reverse(a.begin(), a.end());
    if (a == b) cout << "YES\n";
    else cout << "NO\n";
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