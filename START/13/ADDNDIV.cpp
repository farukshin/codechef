// https://www.codechef.com/START13B/problems/ADDNDIV //todo
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

ll gcd (ll a, ll b)
{
    return a ? gcd (b % a, a) : b;
}

void solve()
{
    ll a, b;
    cin >> a >> b;
    if(a == 1) cout << "YES\n";
    else if(a != 1 && b == 1) cout << "NO\n";

    ll g = gcd(a, b);
    a /= g;
    while(b < a)
        b *= b;
    if(g == 1) cout << "NO\n";
    else cout << (b % a == 0 ? "YES" : "NO") << "\n";
}

int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
