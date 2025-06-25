#include <bits/stdc++.h>
using namespace std;

// ---------- type aliases and macros ---------- //
using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using vi = vector<int>;
using vvi = vector<vi>;
using vll = vector<ll>;
using vvll = vector<vll>;
#define all(x) begin(x), end(x)

// ---------- loop aliases ---------- //
#define loop(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
#define rloop(i, a, b) for (int i = (int)(a); i >= (int)(b); i--)
#define forr(i, v) for (auto &i : v)
#define forit(i, v) for (auto i = v.begin(); i != v.end(); i++)

// ---------- constants ---------- //
const int M = 1e9 + 7;
const int N = 2e5 + 10;

// ---------- operator overloads ---------- //
template <typename T>
ostream& operator<<(ostream& os, const vector<T> &v) {
    size_t n = v.size();
    for (size_t i = 0; i < n; i++) os << v[i] << (i + 1 < n ? ' ' : '\n');
    return os;
}

template <typename T>
istream& operator>>(istream& is, vector<T> &v) {
    for (auto &i : v) is >> i;
    return is;
}

vi operator+(const vi &a, const vi &b) {
    size_t n1 = a.size();
    size_t n2 = b.size();
    vi v(n1 + n2, 0);
    copy(all(a), v.begin());
    copy(all(b), v.begin() + n1);
    return v;
}

// ---------- solve ---------- //
void solve() {
    int n;
    cin >> n;
    int sum = n * (n + 1) / 2;
    int p;
    cin >> p;
    vi a(p);
    cin >> a;
    int q;
    cin >> q;
    vi b(q);
    cin >> b;
    vi v = a + b;
    set<int> s(all(v));
    int t = 0;
    forr(i, s) t += i;
    cout << (t == sum ? "I become the guy.\n" : "Oh, my keyboard!\n");

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
    while (t--) solve();

    #ifdef LOCAL
        auto end = chrono::high_resolution_clock::now();
        auto duration1 = chrono::duration_cast<chrono::microseconds> (end - start);
        auto duration2 = chrono::duration_cast<chrono::milliseconds> (end - start);
        cerr << "Executed in: " << duration1.count() << " μs (" << duration2.count() << " ms)\n";
    #endif // LOCAL

    return 0;
}
