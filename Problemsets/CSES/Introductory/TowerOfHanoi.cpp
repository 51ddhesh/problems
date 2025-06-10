#include <bits/stdc++.h>
using namespace std;

void solve(int n, int a, int c, int b) {
    if (n > 0) {
        solve(n - 1, a, b, c);
        cout << a << ' ' << c << '\n';
        solve(n - 1, b, c, a);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin >> n;
    cout << pow(2, n) - 1 << '\n';
    solve(n, 1, 3, 2);
    
    return 0;
}