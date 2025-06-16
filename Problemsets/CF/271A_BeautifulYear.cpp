#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    for (;;) {
        n++;
        string s = to_string(n);
        set<char> set(s.begin(), s.end());
        if (s.size() == set.size()) {
            cout << s << '\n';
            break;
        }
    }
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