#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vpii = vector<pii>;
using vvi = vector<vi>;
using vll = vector<ll>;
using vvll = vector<vll>;
using mii = map<int, int>;
using mci = map<char, int>;
using si = set<int>;
using sl = set<ll>;
using sch = set<char>;
#define all(x) begin(x), end(x)

#define loop(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
#define rloop(i, a, b) for (int i = (int)(a); i >= (int)(b); i--)
#define forr(i, v) for (auto &i : v)
#define forit(i, v) for (auto i = v.begin(); i != v.end(); i++)

const int M = 1e9 + 7;
const int NN = 2e5 + 10;

template <typename T>
ostream& operator<<(ostream& os, const vector<T> &v) {
    size_t n = v.size();
    for (size_t i = 0; i < n; i++) os << v[i] << ' ';
    return os;
}

template <typename T>
istream& operator>>(istream& is, vector<T> &v) {
    for (auto &i : v) is >> i;
    return is;
}

template <typename X, typename Y>
istream& operator>>(istream& is, pair<X, Y> &p) {
    is >> p.first >> p.second;
    return is;
}

template <typename X, typename Y>
ostream& operator<<(ostream& os, const pair<X, Y> &p) {
    os << p.first << ' ' << p.second << '\n';
    return os;
}

template <typename T>
ostream& operator<<(ostream& os, const set<T> &s) {
    forr(i, s) os << i << ' ';
    return os;
}

void solve() {
    bool ok = 1;
    string s, t;
    cin >> s >> t;
    sch set(all(t));
    int n = s.size();


    loop(i, 1, n) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            if (set.count(s[i - 1]) == 0) {
                ok = 0;
                break;
            }
        }
    }

    cout << (ok ? "Yes\n" : "No\n");
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifdef LOCAL 
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
        freopen("err.txt", "w", stderr);
        auto start = chrono::high_resolution_clock::now();
    #endif // LOCAL
    
    int t = 1;
    cin >> t;
    while(t--) solve();

    #ifdef LOCAL
        auto end = chrono::high_resolution_clock::now();
        auto duration1 = chrono::duration_cast<chrono::microseconds> (end - start);
        auto duration2 = chrono::duration_cast<chrono::milliseconds> (end - start);
        cerr << "Executed in: " << duration1.count() << " μs (" << duration2.count() << " ms)\n";
    #endif // LOCAL

    return 0;
}
