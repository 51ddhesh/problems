#include <bits/stdc++.h>
using namespace std;

int factorial(int n) {
    int factorial = 1;
    for (int i = 2; i <= n; i++) factorial *= i;
    return factorial;
}

void solve() {
    string s;
    cin >> s;
    unordered_map<char, int> m;
    for (char &c : s) m[c]++;
    int num = factorial(s.size());
    int den = 1;
    for (const auto& [_, f] : m) den *= factorial(f);
    int total = num / den;
    sort(s.begin(), s.end());
    cout << total << '\n';
    do {
        cout << s << '\n';
    } while (next_permutation(s.begin(), s.end()));
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}