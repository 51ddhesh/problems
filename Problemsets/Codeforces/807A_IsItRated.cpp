#include <bits/stdc++.h>
using namespace std;

int x, y;

void solve() {
    int n;
    cin >> n;
    bool rated = 0;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        if (x != y) rated = 1;
        v[i] = {x, y};
    }

    if (rated) cout << "rated\n";
    else {
        auto p = v;
        sort(p.rbegin(), p.rend());
        if (p == v) cout << "maybe\n";
        else cout << "unrated\n";
    }

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