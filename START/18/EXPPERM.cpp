// https://www.codechef.com/START18B/problems/EXPPERM
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll mod = 1e9 + 7;

ll binpow(ll a, ll n, ll m)
{
    a %= m, n %= m;
    if (n == 0)
        return 1 % m;

    if (n % 2 == 1)
        return (binpow(a, n - 1, m) * a) % m;
    else
        return binpow((a * a) % m, n / 2, m);
}

void solve()
{
    ll n;
    cin >> n;
    ll v = binpow(12, mod - 2, mod);
    ll p = ((((((n + 1) * (n - 1)) % mod) * (3 * n + 2)) % mod) * v) % mod;
    cout << p << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
