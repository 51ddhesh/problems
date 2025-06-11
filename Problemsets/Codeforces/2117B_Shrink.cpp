#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    n -= 2;
    cout << 1 << ' ';
    int x = 3;
    while(n--) cout << x++ << ' ';
    cout << 2 << '\n';
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