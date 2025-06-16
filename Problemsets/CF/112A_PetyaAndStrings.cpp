#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s, t;
    cin >> s >> t;
    for (char &c : s) {
        if (c <= 'Z' && c >= 'A') c += 32;
    }
    for (char &c : t) {
        if (c <= 'Z' && c >= 'A') c += 32;
    }

    if (s == t) cout << 0 << '\n';
    else if (s > t) cout << 1 << '\n';
    else if (s < t) cout << -1 << '\n';

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