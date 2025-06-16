#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, l, r;
    cin >> n >> m >> l >> r;
    int a = 0, b = 0;
    while(m) {
        if (a > l) a--, m--;
        else if (b < r) b++, m--;
        else m--;
    }
    cout << a << ' ' << b << '\n';
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