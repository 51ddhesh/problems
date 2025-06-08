#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;
    if (a > b) swap(a, b);
    if (2 * a < b) cout << "NO\n";
    else {
        a %= 3, b %= 3;
        if (a > b) swap(a, b);
        if ((a == 0 && b == 0) || (a == 1 && b == 2)) cout << "YES\n";
        else cout << "NO\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t = 1; 
    cin >> t;
    while(t--) solve();
    return 0;
}