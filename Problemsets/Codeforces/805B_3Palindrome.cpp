#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string ans;
    if (n == 1) ans = "a";
    else if (n == 2) ans = "aa";
    else if (n == 3) ans = "aab\n";
    else {
        string c = "aabb";
        int j = 0;
        for (int i = 0; i < n; i++) {
            ans.push_back(c[j]);
            j++;
            j %= 4;
        }
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    long long t = 1; 
    // cin >> t;
    while(t--) solve();
    return 0;
}