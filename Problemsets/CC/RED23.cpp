#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x;
    cin >> x;
    if (x % 3 == 0) cout << 3 << '\n';
    else cout << 1 << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    long long t = 1; 
    cin >> t;
    while(t--) solve();
    return 0;
}