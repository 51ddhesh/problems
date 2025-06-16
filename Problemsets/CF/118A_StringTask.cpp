#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;

    for (char &c : s) {
        if (c <= 'Z' && c >= 'A') c += 32;
    }

    int n = s.size();

    string temp;
    for (char &c : s) {
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'y') temp.push_back(c);
    }

    // cerr << temp << '\n';

    string ans;
    
    for (char &c : temp) {
        ans.push_back('.');
        ans.push_back(c);
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