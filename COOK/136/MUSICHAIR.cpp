// https://www.codechef.com/COOK136B/problems/MUSICHAIR
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n;
    cin >> n;
    n -= 1;
    ll ans = 0;
    for (ll i = 1; i * i < n; i++)
        if (n % i == 0)
            ans += 2;
    if (pow(ll(sqrt(n)), 2) == n)
        ans += 1;
    cout << ans << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
