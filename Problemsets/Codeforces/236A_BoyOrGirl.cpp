#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    set<char> count(s.begin(), s.end());
    size_t n = count.size();
    if (n & 1) cout << "IGNORE HIM!\n";
    else cout << "CHAT WITH HER!\n";
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