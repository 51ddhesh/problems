#include <bits/stdc++.h>
using namespace std;

int x, n;
set<int> s;

void solve() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        s.insert(x);
    }
    cout << s.size() << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}