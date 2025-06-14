#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (char &c : s) {
        if (c <= 'Z' && c >= 'A') c += 32;
    }
    s.erase(unique(s.begin(), s.end()), s.end());
    if (s == "meow") cout << "YES\n";
    else cout << "NO\n";
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