#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s; 
    cin >> s;
    int x = 0;
    string ans;
    for (char &c : s) {
        if (c == '+') x++;
    }
    sort(s.begin(), s.end());
    for (char &c : s) {
        if (c != '+') {
            ans.push_back(c);
            if (x > 0) {
                ans.push_back('+');
                x--;
            }
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
    while (t--) solve();
    return 0;
}