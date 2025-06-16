#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    int a = 0, b = 0;
    
    auto islower = [](char &c) -> bool {
        return (c >= 'a' && c <= 'z');
    };

    for (char &c : s) {
        if (islower(c)) a++;
        else b++;
    }

    if (a >= b) {
        for (char &c : s) {
            if (!islower(c)) c += 32; 
        }
    } else if (a < b) {
        for (char &c : s) {
            if (islower(c)) c -= 32;
        }
    }

    cout << s << '\n';

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    int t = 1; 
    // cin >> t;
    while (t--) solve();
    return 0;
}