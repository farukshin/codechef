// https://www.codechef.com/SNCK1B21/problems/HLPNISHANT
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll k;
    cin >> k;
    ll l = 1, r = 1e9;
    ll ans = 0;
    while (r > l)
    {
        ll mid = (r + l) / 2;
        if ((mid * (mid + 1) / 2) + 1 <= k)
            ans = mid + 1, l = mid + 1;
        else
            r = mid;
    }
    cout << ans * 2 << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
