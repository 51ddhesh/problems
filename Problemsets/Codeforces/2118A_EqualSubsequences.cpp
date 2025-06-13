#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    string ans;
    for (int i = 0; i < k; i++) ans.push_back('1');
    for (int i = k + 1; i <= n; i++) ans.push_back('0');
    cout << ans << '\n';
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